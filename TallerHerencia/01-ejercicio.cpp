/*
Diseña un sistema que modele el comportamiento de vehículos autónomos. Existen varias entidades:

Vehiculo: con atributos como marca, modelo y velocidad.
Terrestre: especializado en características de vehículos terrestres, como tipo de ruedas.
Aereo: especializado en vehículos aéreos, como altitud máxima.
DronHibrido: hereda de Terrestre y Aereo, y puede operar tanto en tierra como en el aire.
*/
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

// Cremos la clase Vehiculo la cual sera la principal a hacer las herencias
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

// creamos la clase Terrestre
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

// creamos la clase Aereo
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

// creamos la clase Nautico
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

// Clase DronHibrido que hereda de Terrestre, Aereo y Nautico
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
