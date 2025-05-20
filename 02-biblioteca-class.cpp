#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Método para prestar el libro
Método para devolver el libro
Método para mostrar la información del libro
Crear un objeto Libro
*/ 

class Libro{
    private:
        string titulo;
        string autor;
        int anioPublicacion;
        bool disponible;
        bool eliminado;
    
    // constructor
    public:
        Libro(string t, string a, int anio, bool disp= true){
            titulo = t;
            autor = a;
            anioPublicacion = anio;
            disponible = disp;
        }

    // metodo para prestar el libro
    void prestar(){
        if(disponible){
            disponible = false;
            cout<<"Libro prestado con exito"<<endl;
        }else{
            cout<<"Libro no disponible"<<endl;
        }
    }

    // metodo para devolver el libro
    void devolver(){
        disponible = true;
        cout<<"Libro devuelto"<<endl;
    }

    // metodo para mostrar la informacion del libro
    void mostrarInformacion(){
        cout << "\nInformación del libro:" << endl;
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de publicación: " << anioPublicacion << endl;
        cout << "Disponible: " << (disponible ? "Sí" : "No") << endl;
    }

    // esta es la funcion para eliminar un libro del vector
    void eliminarLibro(vector<Libro> &libros, const string titulo){
        for(auto it=libro.begin(); it != libro.end(); ++it){
            if(it->gettitulo()==titulo){
                libros.erase(it);
                cout<<"Libros eliminados correctamente";
                return;
            }
        }
        cout<<"Libros no encontrados";
    }
    
};

int main(){
    //crear un objeto libro
    Libro libro1("Caperucita roja","Hermanos Greem", 1697);

    // mostrar la informacion inicial
    libro1.mostrarInformacion();

    //prestar el libro
    libro1.prestar();
    libro1.mostrarInformacion();

    // intentar volver a presta ese mismo libro
    libro1.prestar();

    // devilver el libro
    libro1.devolver();
    libro1.mostrarInformacion();

    // eliminamos un libro del vector
    libro1.prestar();
    libro1.eliminarLibro();
}