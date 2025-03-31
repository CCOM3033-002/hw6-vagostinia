// Victoria S. Agostini 801224654 vagostinia
#include <iostream>
#include <cmath>  
#include <iomanip>  
using namespace std;

// Esta función solicita un valor positivo al usuario y lo valida.
double pedirPositivo(string mensaje) {
    double valor;
    do {
        cout << mensaje;
        cin >> valor;
        if (valor <= 0 || cin.fail()) { // Verifica si el valor es inválido o negativo
            cout << "Error: Introduzca un número positivo válido.\n";
            cin.clear(); // Limpia el error en la entrada
            cin.ignore(1000, '\n'); // Descarta la entrada incorrecta
        }
    } while (valor <= 0);
    return valor;
}

int main() {
    char figura, opcion;
    double resultado;
    
    // Solicita al usuario que seleccione una figura
    cout << "Seleccione una figura:\n";
    cout << "a. Cilindro\nb. Esfera\nc. Prisma rectangular\n";
    cin >> figura;
    
    // Solicita al usuario que elija entre calcular volumen o área de superficie
    cout << "Seleccione una opción:\n";
    cout << "a. Volumen\nb. Área de superficie\n";
    cin >> opcion;
    
    cout << fixed << setprecision(2); // Configura la precisión de los decimales
    
    // Determina qué figura se seleccionó y calcula volumen o área de superficie
    if (figura == 'a') { // Cilindro
        double r = pedirPositivo("Ingrese el radio: ");
        double h = pedirPositivo("Ingrese la altura: ");
        resultado = (opcion == 'a') ? (M_PI * r * r * h) : (2 * M_PI * r * (r + h));
    } 
    else if (figura == 'b') { // Esfera
        double r = pedirPositivo("Ingrese el radio: ");
        resultado = (opcion == 'a') ? ((4.0 / 3.0) * M_PI * r * r * r) : (4 * M_PI * r * r);
    } 
    else if (figura == 'c') { // Prisma rectangular
        double l = pedirPositivo("Ingrese el largo: ");
        double w = pedirPositivo("Ingrese el ancho: ");
        double h = pedirPositivo("Ingrese la altura: ");
        resultado = (opcion == 'a') ? (l * w * h) : (2 * (l * w + l * h + w * h));
    } 
    else {
        cout << "Selección inválida.\n"; // Mensaje de error si la selección es incorrecta
        return 1;
    }
    
    // Muestra el resultado final del cálculo
    cout << "El resultado es: " << resultado << " unidades.\n";
    return 0;
}
