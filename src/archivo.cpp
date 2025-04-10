#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Abrir el archivo para escritura
    ofstream archivo("archivo.txt");
    if(!archivo.is_open()) {
        cerr << "Error al abrir el archivo para escritura." << endl;
        return 1;
    }

    cout << "Escribiendo en el archivo..." << endl;
    archivo << "Hola, mundo!" << endl;
    archivo << "Linea 2" << endl;
    archivo << "Linea 3" << endl;
    archivo << "Linea 4" << endl;
    archivo << "Linea 5" << endl;
    archivo << "Linea 6" << endl;

    // Abrir el archivo para lectura
    ifstream archivoLectura("archivo.txt");
    if(!archivoLectura.is_open()) {
        cerr << "Error al abrir el archivo para lectura." << endl;
        return 1;
    }
    cout << "Leyendo del archivo..." << endl;
    string linea;
    while(getline(archivoLectura, linea)) {
        cout << linea << endl;
    }

     // Cerrar el archivo
     archivo.close();

    return 0;
}