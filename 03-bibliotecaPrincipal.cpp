/* este es el codigo de la biblioteca, que el profesor pio anteriormente, 
recordar que a esta se le agrego, la funcion de eliminar, 
prestar, agregar, modificar, buscar, y mostrar
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    bool prestado;

public:
    Libro(string t, string a) : titulo(t), autor(a), prestado(false) {}

    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    bool estaPrestado() const { return prestado; }

    void prestar() {
        if (!prestado) {
            prestado = true;
            cout << "El libro ha sido prestado.\n";
        } else {
            cout << "El libro ya está prestado.\n";
        }
    }

    void devolver() {
        if (prestado) {
            prestado = false;
            cout << "El libro ha sido devuelto.\n";
        } else {
            cout << "El libro no está prestado.\n";
        }
    }

    void mostrar() const {
        cout << "Titulo: " << titulo << ", Autor: " << autor 
        cout << ", Estado: " << (prestado ? "Prestado" : "Disponible") << endl;
    }

    void modificar(string nuevoTitulo, string nuevoAutor) {
        titulo = nuevoTitulo;
        autor = nuevoAutor;
        cout << "Libro modificado correctamente.\n";
    }
};

// Función para buscar libro por título
int buscarLibro(const vector<Libro>& libros, const string& titulo) {
    for (size_t i = 0; i < libros.size(); ++i) {
        if (libros[i].getTitulo() == titulo) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<Libro> biblioteca;
    int opcion;
    string titulo, autor;

    do {
        cout << "\n--- Menu Biblioteca ---\n";
        cout << "1. Agregar libro\n";
        cout << "2. Eliminar libro\n";
        cout << "3. Prestar libro\n";
        cout << "4. Buscar libro\n";
        cout << "5. Modificar libro\n";
        cout << "6. Mostrar todos los libros\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();  // Limpiar buffer

        switch (opcion) {
            case 1: {
                cout << "Ingrese titulo: ";
                getline(cin, titulo);
                cout << "Ingrese autor: ";
                getline(cin, autor);
                biblioteca.emplace_back(titulo, autor);
                cout << "Libro agregado.\n";
                break;
            }
            case 2: {
                cout << "Ingrese titulo del libro a eliminar: ";
                getline(cin, titulo);
                int index = buscarLibro(biblioteca, titulo);
                if (index != -1) {
                    biblioteca.erase(biblioteca.begin() + index);
                    cout << "Libro eliminado.\n";
                } else {
                    cout << "Libro no encontrado.\n";
                }
                break;
            }
            case 3: {
                cout << "Ingrese titulo del libro a prestar: ";
                getline(cin, titulo);
                int index = buscarLibro(biblioteca, titulo);
                if (index != -1) {
                    biblioteca[index].prestar();
                } else {
                    cout << "Libro no encontrado.\n";
                }
                break;
            }
            case 4: {
                cout << "Ingrese titulo del libro a buscar: ";
                getline(cin, titulo);
                int index = buscarLibro(biblioteca, titulo);
                if (index != -1) {
                    biblioteca[index].mostrar();
                } else {
                    cout << "Libro no encontrado.\n";
                }
                break;
            }
            case 5: {
                cout << "Ingrese titulo del libro a modificar: ";
                getline(cin, titulo);
                int index = buscarLibro(biblioteca, titulo);
                if (index != -1) {
                    cout << "Nuevo titulo: ";
                    getline(cin, titulo);
                    cout << "Nuevo autor: ";
                    getline(cin, autor);
                    biblioteca[index].modificar(titulo, autor);
                } else {
                    cout << "Libro no encontrado.\n";
                }
                break;
            }
            case 6: {
                if (biblioteca.empty()) {
                    cout << "No hay libros en la biblioteca.\n";
                } else {
                    for (const auto& libro : biblioteca) {
                        libro.mostrar();
                    }
                }
                break;
            }
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 0);

    return 0;
}
