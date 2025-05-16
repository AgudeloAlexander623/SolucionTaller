#include<iostream>
#include<string>
using namespace std;

struct Libro{
    string titulo;
    int age;
    string autor;
    string ISBN;
};

/*
Vamos a crear las funcione de las estructuras
1-AgregarLibro
2-mostrarLibro
3-buscarLibro
Vamos a crear un menu de opciones
*/

void AgregarLibro(Libro biblioteca[], int &ToltalLibros){
    if(ToltalLibros>=5){
        cout<<"biblioteca llena";
        return;
    }
    cout<<"Ingrese el titulo del libro"<<endl;
    cin.ignore();
    getline(cin,biblioteca[ToltalLibros].titulo);

    cout<<"Ingrese el nombre del autor del libro"<<endl;
    cin.ignore();
    getline(cin,biblioteca[ToltalLibros].autor);

    cout<<"ingrese año en el que se publico"<<endl;
    cin>>biblioteca[ToltalLibros].age;

    cout<<"Ingrese ISBN"<<endl;
    cin.ignore;
    getline(cin, biblioteca[ToltalLibros].ISBN);

    ToltalLibros++;
    cout<<"libro agregado"<<endl;
}

void MostrarLibro(const Libro biblioteca[], int ToltalLibros){
    if(ToltalLibros == 0){
        cout<<"----no hay libros Registrados----\n";
    }

    cout<<"----------Lobros Registrados----------";
    for(int i = 0; i< ToltalLibros; i++){
        cout<<"Titulo: "<<biblioteca[i].titulo<<endl;
        cout<<"Año: "<<biblioteca[i].age<<endl;
        cout<<"Autor: "<<biblioteca[i].autor<<endl;
        cout<<"ISBN: "<<biblioteca[i].ISBN<<endl;
    }
}


void BuscarLibro(const Libro biblioteca[],int ToltalLibros){
    string ISBN;
    cout<<"ingrese el ISBN a buscar: "<<endl;
    bool encontrar = false;
    for (int i=0; i<ToltalLibros;i++){
        if(biblioteca[i].ISBN = ISBN){
            cout<<"libro encontrado"<<endl;
            cout<<"Titulo: "<<biblioteca[i].titulo<<endl;
            cout<<"Autor: "<<biblioteca[i].autor<<endl;
            encontrar = true;
            break;
        }
    }
    if(!encontrar){
        cout<<"el libro no esta registrado";
    }
}

void BuscarLibroNombre(const Libro biblioteca[],int TotalLibros){
    string Titulo;
    cout<<"Ingresar titulo del libro a buscar"<<endl;
    bool encontrar = false;
    for(int i = 0; i<TotalLibros; i++){}
}


void Delete(){

}

//dejamos para el final
int main(){
    Libro biblioteca[5];
    int TotalLibros = 0;
    int option;

    do{
        cout<<"-----Menu-----"
        cout<<"01- Agregar libros"<<endl;
        cout<<"02- Mostrar libros"<<endl;
        cout<<"03- Buscar libros"<<endl;
        cout<<"04- salir "<<endl;
        cin>>option;

        switch(option){
            case 1:
                AgregarLibro(biblioteca,TotalLibros);
                break;
            case 2:
                MostrarLibro(biblioteca,TotalLibros);
            case 3;
                buscarLibro(biblioteca,TotalLibros)
        }
    }while(option !=4){
        return 0;
    }
}
/*
agregar dos funciones
01- buscar por nombre del autor
02- eliminar un libro
*/