#include<iostream>
#include<string>

using namespace std;

struct Libro{
    string titulo;
    string autor;
    int anio;
    string ISBN;
};

/*
vamos a crear las funciones de la estructura
1- agregarLibro
2- mostrarLibro
3- buscarLibro
4- vamos a crear un menu de opciones
*/

void agregarLibro(Libro biblioteca[], int &totalLibros){
    if(totalLibros >=5){
        cout<<"!!!Biblioteca Llena\n";
        return;
    }
    cout<<"Ingrese el titulo del libro: ";
    cin.ignore();
    getline(cin, biblioteca[totalLibros].titulo);

    cout<<"Ingrese el autor: ";
    getline(cin, biblioteca[totalLibros].autor);

    cout<<"Ingrese el año: ";
    cin>>biblioteca[totalLibros].anio;

    cout<<"Ingrese ISBN: ";
    cin>>biblioteca[totalLibros].ISBN;

    totalLibros++;
    cout<<"Libro Agregado!!!!!";
}

void mostrarLibro( const Libro biblioteca[], int totalLibros ){
    if(totalLibros == 0){
        cout<<"No hay libros registrados\n";
        return;
    }
    cout<<"\n----- LIBROS REGISTRADOS-----\n";
    for(int i = 0; i < totalLibros; i++){
        cout<<"Titulo: " <<biblioteca[i].titulo<<endl;
        cout<<"Autor: " <<biblioteca[i].autor<<endl;
        cout<<"Año: " <<biblioteca[i].anio<<endl;
        cout<<"ISBN: " <<biblioteca[i].ISBN<<"\n\n";
    }
}

void buscarLibro(const Libro biblioteca[], int totalLibros){
    string ISBN;
    cout<<"Ingrese el ISBN a Buscar: ";
    cin>>ISBN;

    bool encontrado = false;
    for(int i = 0; i < totalLibros; i++){
        if(biblioteca[i].ISBN == ISBN){
            cout<<"\nLibro encontrado\n";
            cout<<"Titulo: "<<biblioteca[i].titulo<<endl;
            cout<<"Autor: "<<biblioteca[i].autor<<endl;
            encontrado = true;
            break;
        }
    }
    if(!encontrado){
        cout<<"El libro no existe o no esta registrado";
    }
}

// Esta funcion es para buscar el libro por el Titulo
void buscarLibroTitulo(const Libro biblioteca[], int totalLibros){
    string titulo;
    cout<<"Ingresar el titulo del nombre a buscar";
    getline(cin, biblioteca[totalLibros].titulo);

    // buscamos el libro 
    bool encontrado = false;
    for(int i = 0; i<totalLibros; i++){
        if(biblioteca[i].titulo){
            cout<<"libro encontrado"<<endl;
            cout<<"Titulo: "<<biblioteca[i].titulo<<endl;
            cout<<"Autor: "<<biblioteca[i].autor<<endl;
            encontrar = true;
            break
        }
    }
    // balidamos si el libro esta o no esta
    if(!encontrado){
        cout<<"El libro no esta en la base de datos";
    }
}

// agregamos la funcion de eliminar
void eliminarLibro(const Libro biblioteca[], int &totalLibros){
    
    string Titulo;
    cout<<"Ingresar Titulo del libro a eliminar"<<endl;
    cin>>Titulo;
    // getline(cin,biblioteca[totalLibros].titulo);
    
    //validamos si hay libos o no para poder eliminarlo
    if(totalLibros == 0){
        cout<<"no hay libros para eliminar"<<endl;
    }

    // eliminamos el libro permanentemente por el titulo
    for(int i=0; i<totalLibros; i++){
        if(biblioteca[i].titulo == Titulo){
            for(int j = 0; j< totalLibros - 1; j++){
                biblioteca[j]=biblioteca[j+1];
            }
            totalLibros--;
            cout << "Libor eliminado correctamente"<<endl;
            encontrado = true;
            break;
        }
    }
// verifcamos que si se encuntre el libro 
    if(!encontrado){
        cout<<"no se encuentra un libro con ese titulo";
    }
}

//principal
int main(){
    Libro biblioteca[5];
    int totalLibros = 0;
    int op;

    do{
        cout<<"\n------Menú de Opciones--------\n";
        cout<<"1. Agregar libro\n";
        cout<<"2. Mostrar todos los libros\n";
        cout<<"3. Buscar Libro por ISBN\n";
        // ponemos en el switch las opciones
        cout<<"4. Buscar libro por el titulo\n";
        cout<<"5. Eliminar libro\n";
        //------------------------------------
        cout<<"6. Salir\n";
        cout<<"ingrese opcion: ";
        cin>>op;
        switch (op)
        {
            case 1: agregarLibro(biblioteca, totalLibros);break;
            case 2: mostrarLibro(biblioteca, totalLibros);break;
            case 3: buscarLibro(biblioteca, totalLibros);break;
            
            // buscar libro por el titulo
            case 4; buscarLibroTitulo(biblioteca,totalLibros);break;
            // elminamos el libro
            case 5: eliminarLibro(biblioteca,totalLibros);break;

            case 6: cout<<"Saliendo....\n";break;
            default: cout<<"Opcion invalida";
        }
    }while(op != 4);
    return 0;
}
/*
agregar dos funciones
01- buscar por nombre del autor
02- eliminar un libro
*/