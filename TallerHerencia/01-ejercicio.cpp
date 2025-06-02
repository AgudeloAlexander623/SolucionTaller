/*
Diseña un sistema que modele el comportamiento de vehículos autónomos. Existen varias entidades:

Vehiculo: con atributos como marca, modelo y velocidad.
Terrestre: especializado en características de vehículos terrestres, como tipo de ruedas.
Aereo: especializado en vehículos aéreos, como altitud máxima.
DronHibrido: hereda de Terrestre y Aereo, y puede operar tanto en tierra como en el aire.
*/
// #include<iostream>
// #include<stdlib.h>
// #include<string.h>

// using namespace std;

// // definimos la clase principal para hacer la herencia multiple
// class Vehiculo{
//     protected:
//         int idVehiculo;
//         string marca;
//         string modelo;
//         int velocidad;
//     public:
//         Vehiculo(
//             int idVehiculo,
//             string marca,
//             string modelo,
//             int velocidad
//         )
//             /* creamoms la funcion que los usuarios van a ver 
//             sobre los vehiculos, recodar que esta funcion no
//             retornara nada, ya que estos son datos que el usuarion no puede ver si
//             no estan definidas (es una clase para generar el constructor
//             "como un struct" pero con la viavilidad de que no salga error)*/
//         virtual void Vehiculo(){
//             cout<<"Numero de placa: "<<idVehiculo<<endl;
//             cout<<"Marca del vehiculo: "<<marca<<endl;
//             cout<<"Modelo del vehiculo: "<<modelo<<endll
//             cout<<"Velocidad maxima del vehiculo: "<<velocidad;
//         };
// }

// // creamos la clase de vehiculos Terrestre
// class Terrestre : virtual public Vehiculo{
//     protected:
//         string tipoVehiculo;
//         string tipoRuedas;
//     public:
//         Terrestre(
//             string tipoVehiculo,
//             string tipoRuedas,
//             int idVehiculo,
//             string marca,
//             string modelo,
//             int velocidad
//         ):
//         // immportamos los datos de Vehiculo los cuales se van a usar
//         Vehiculo(
//             idVehiculo,
//             marca,
//             modelo,
//             velocidad
//         ), 
//         tipoRuedas(tipoRuedas),
//         tipoVehiculo(tipoVehiculo){}

//         // creamos la funcion para mostrarle al usuario los datos del vehiculo Terrestre
//         void mostrarTerrestres(){
//             //cout<<"----- Vehiculos Terrestres -----"<<endl;
//             cout<<"tipo de vehiculo: "<<tipoVehiculo<<endl;
//             //cout<<"Marca: "<<marca<<endl;
//             //cout<<"Modelo: "<<modelo<<endl;
//             cout<<"Tipo de ruedas: "<<endl;
//             //cout<<"Numero de serie: "<<endl;
//             //cout<<"Velocidad maxima: "<<velocidad<<endl;
//         };
// };


// class Aereo : virtual public Vehiculo, public Terrestre{
//     protected:
//         int alturaMax;
//     public:
//         Aereo(
//             int alturaMax,
//             string marca,
//             string modelo,
//             int idVehiculo,
//             int velocidad,
//             string tipoVehiculo
//         ):
//         Vehiculo(marca,modelo,idVehiculo,velocidad),
//         Terrestre(tipoVehiculo),
//         alturaMax(alturaMax){}

//         // definimos la funcion para mostrarle al usuario los datos del vehiculo Aereo
//         void mostrarAereo(){
             //cout<<"----- Vehiculos Aereos -----"<<endl; 
             //cout<<"tipo de vehiculo: "<<tipoVehiculo<<endl;
             //cout<<"Marca: "<<marca<<endl;
             //cout<<"Modelo: "<<modelo<<endl;
             //cout<<"Numero de serie: "<<endl;
             //cout<<"Velocidad maxima: "<<velocidad<<endl;
//             cout<<"Altura maxima: "<<alturaMax<<endl;
//         };
// }

// class Nautico : virtual public Vehiculo, public Terrestre{
//     protected:
//         float profundidad
//     public:
//         Nautico(
//             int idVehiculo,
//             string marca,
//             string modelo,
//             int velocidad,
//             float profundidad
//         ):
//         Terrestre(tipoVehiculo),
//         profundidad(profundidad){}

//         void mostrarNautico(){
//             //cout<<"----- Vehiculos Nauticos -----"<<endl;
//             //cout<<"tipo de vehiculo: "<<tipoVehiculo<<endl;
//             //cout<<"Marca: "<<marca<<endl;
//             //cout<<"Modelo: "<<modelo<<endl;
//             //cout<<"Numero de serie: "<<endl;
//             //cout<<"Velocidad maxima: "<<velocidad<<endl;
//             cout<<"Profundidad maxima: "<<profundidad<<endl;
//         };
// }

// class Dron_hibrido : 
// virtual public Vehiculo, 
// public Terrestre, 
// public Aereo, public{
//     public:
//         Dron_hibrido(
//             string marca, 
//             string modelo, 
//             int idVehiculo,
//             int velocidad,
//             string tipoVehiculo,Chevrolet
//             string tipoRuedas
//             string alturaMax,
//             float profundidad
//         ):
//         Vehiculo(marca,modelo,velocidad,idVehiculo),
//         Terrestre(tipoVehiculo, tipoRuedas),
//         Aereo(alturaMax),
//         Nautico(profundidad){}

//         void mostrarDron(){
//             // cout<<"tipo de Dron: "<<tipoVehiculo<<endl;
//             // cout<<"Marca: "<< marca<<endl;
//             // cout<<"Modelo: "<<mmodelo<<endl;
//             // cout<<"Velocidad Maxima: "<<velocidad<<endl;
//             // cout<<"Numero de serie: "<<idVehiculo<<endl;

//             if(
//                 tipoVehiculo == "Carro" ||
//                 tipoVehiculo == "carro" ||
//                 tipoVehiculo == "moto" ||
//                 tipoVehiculo == "Moto"
//             ){
//                 cout<<"tipo de ruedas: "<<tipoRuedas<<endl;
//             }else if(
//                 tipoVehiculo == "avion"||
//                 tipoVehiculo == "Avion"||
//                 tipoVehiculo == "Helicoptero" ||
//                 tipoVehiculo == "helicoptero"
//             ){
//                 cout<<"Altitud maxima: "<<alturaMax<<endl;
//             }else if(
//                 tipoVehiculo == "barco" ||
//                 tipoVehiculo == "Barco" ||
//                 tipoVehiculo == "lancha" ||
//                 tipoVehiculo == "Lancha" ||
//             ){
//                 cout<<"Profundidad maxima: "<<profundidad<<endl;
//             }else{
//                 cout<<"error dentro de al identificar el tipo de vahiculo(Dron)"<<endl;
//             }
//         }
// }

// //dejamos la funcion principal para el final
// int main(){
    
//     mostrarDron dron("Hyper Go ","H16BM ",331245,42,"Km/H ","Carro a control remoto"," cilicona/Goma ",0," ",0)<<endl;
//     mostrarTerrestre terrestre("Automovil/Carro, "," Michellin deportivas,"," KON 558, "," Chevrolet,"," Camaro,",318,"Km/H")<<endl;
//     // mostrarAereo aereo(10500,"Airbus","A320",3205437,"")<<endl;

//     dron.mostrarDron();
//     terrestre.mostrarTerrestre();
// }




#include <iostream>
#include <string>

using namespace std;

// Clase base Vehiculo
class Vehiculo {
protected:
    int idVehiculo;
    string marca;
    string modelo;
    int velocidad;

public:
    Vehiculo(int idVehiculo, string marca, string modelo, int velocidad)
        : idVehiculo(idVehiculo), marca(marca), modelo(modelo), velocidad(velocidad) {}

    virtual void mostrarDatos() {
        cout << "Numero de placa: " << idVehiculo << endl;
        cout << "Marca del vehiculo: " << marca << endl;
        cout << "Modelo del vehiculo: " << modelo << endl;
        cout << "Velocidad maxima del vehiculo: " << velocidad << " km/h" << endl;
    }
};

// Clase derivada Terrestre
class Terrestre : virtual public Vehiculo {
protected:
    string tipoVehiculo;
    string tipoRuedas;

public:
    Terrestre(string tipoVehiculo, string tipoRuedas, int idVehiculo, string marca, string modelo, int velocidad)
        : Vehiculo(idVehiculo, marca, modelo, velocidad), tipoVehiculo(tipoVehiculo), tipoRuedas(tipoRuedas) {}

    void mostrarTerrestre() {
        mostrarDatos();
        cout << "Tipo de vehiculo terrestre: " << tipoVehiculo << endl;
        cout << "Tipo de ruedas: " << tipoRuedas << endl;
    }
};

// Clase derivada Aereo
class Aereo : virtual public Vehiculo {
protected:
    int alturaMax;

public:
    Aereo(int alturaMax, int idVehiculo, string marca, string modelo, int velocidad)
        : Vehiculo(idVehiculo, marca, modelo, velocidad), alturaMax(alturaMax) {}

    void mostrarAereo() {
        mostrarDatos();
        cout << "Altura maxima: " << alturaMax << " metros" << endl;
    }
};

// Clase derivada Nautico
class Nautico : virtual public Vehiculo {
protected:
    float profundidad;

public:
    Nautico(float profundidad, int idVehiculo, string marca, string modelo, int velocidad)
        : Vehiculo(idVehiculo, marca, modelo, velocidad), profundidad(profundidad) {}

    void mostrarNautico() {
        mostrarDatos();
        cout << "Profundidad maxima: " << profundidad << " metros" << endl;
    }
};

// Clase Dron Hibrido que hereda de Terrestre, Aereo y Nautico
class DronHibrido : public Terrestre, public Aereo, public Nautico {
public:
    DronHibrido(string marca, string modelo, int idVehiculo, int velocidad,
            string tipoVehiculo, string tipoRuedas, int alturaMax, float profundidad)
        : Vehiculo(idVehiculo, marca, modelo, velocidad),
        Terrestre(tipoVehiculo, tipoRuedas, idVehiculo, marca, modelo, velocidad),
        Aereo(alturaMax, idVehiculo, marca, modelo, velocidad),
        Nautico(profundidad, idVehiculo, marca, modelo, velocidad) {}

    void mostrarDron() {
        mostrarDatos();
        cout << "Tipo de vehiculo: " << tipoVehiculo << endl;
        cout << "Tipo de ruedas: " << tipoRuedas << endl;
        cout << "Altitud maxima: " << alturaMax << " metros" << endl;
        cout << "Profundidad maxima: " << profundidad << " metros" << endl;
    }
};

int main() {
    DronHibrido dron("Hyper Go", "H16BM", 331245, 42, "Carro", "Silicona/Goma", 100, 5.5);
    Terrestre terrestre("Automovil", "Michellin deportivas", 558, "Chevrolet", "Camaro", 318);
    Aereo aereo(10500, 3205437, "Airbus", "A320", 850);
    Nautico nautico(120.5, 445566, "Yamaha", "WaveRunner", 80);

    cout << "\n--- Dron Hibrido ---\n";
    dron.mostrarDron();

    cout << "\n--- Vehiculo Terrestre ---\n";
    terrestre.mostrarTerrestre();

    cout << "\n--- Vehiculo Aereo ---\n";
    aereo.mostrarAereo();

    cout << "\n--- Vehiculo Nautico ---\n";
    nautico.mostrarNautico();

    return 0;
}
