
: [Tu Nombre]
Curso: [Tu Curso]
Fecha: [Fecha]
Descripción: 
    Este programa permite calcular el volumen y el área de la superficie de tres figuras 3D:
    - Cilindro
    - Esfera
#include <iostream>
#include <cmath>  
#include <iomanip>  
using namespace std;

// Funciones sobrecargadas para calcular volumen

// Volumen de un cilindro: V = π * r² * h
double volumen(double radio, double altura) {
    return M_PI * pow(radio, 2) * altura;
}

// Volumen de una esfera: V = (4/3) * π * r³
double volumen(double radio) {
    return (4.0 / 3.0) * M_PI * pow(radio, 3);
}

// Volumen de un prisma rectangular: V = largo * ancho * alto
double volumen(double largo, double ancho, double alto) {
    return largo * ancho * alto;
}

// Funciones sobrecargadas para calcular área de la superficie

// Área de la superficie de un cilindro: A = 2πr (r + h)
double areaSuperficie(double radio, double altura) {
    return 2 * M_PI * radio * (radio + altura);
}

// Área de la superficie de una esfera: A = 4πr²
double areaSuperficie(double radio) {
    return 4 * M_PI * pow(radio, 2);
}

// Área de la superficie de un prisma rectangular: A = 2(lw + lh + wh)
double areaSuperficie(double largo, double ancho, double alto) {
    return 2 * (largo * ancho + largo * alto + ancho * alto);
}

// Función para validar entrada y pedir un valor positivo
double pedirPositivo(string mensaje) {
    double valor;
    while (true) {
        cout << mensaje;
        cin >> valor;

        // Verificar si la entrada es un número válido y positivo
        if (cin.fail() || valor <= 0) {
            cout << "Error: Introduzca un número positivo válido.\n";
            cin.clear();  // Limpiar el error en cin
            cin.ignore(1000, '\n');  // Descartar la entrada incorrecta
        } else {
            return valor;
        }
    }
}

// Función principal del programa
int main() {
    char figura, opcion;

    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras.\n";

    // Menú de selección de figura con validación
    do {
        cout << "\nEscoja una figura:\n";
        cout << "  a. Cilindro\n";
        cout << "  b. Esfera\n";
        cout << "  c. Prisma rectangular\n";
        cout << "Selección: ";
        cin >> figura;
        figura = tolower(figura);  // Permite ingresar 'A', 'B', 'C' en mayúsculas

        if (figura != 'a' && figura != 'b' && figura != 'c') {
            cout << "Selección inválida. Intente de nuevo.\n";
        }
    } while (figura != 'a' && figura != 'b' && figura != 'c');

    // Menú de selección de cálculo (Volumen o Área de superficie)
    do {
        cout << "\nEscoja entre las siguientes opciones:\n";
        cout << "  a. Volumen\n";
        cout << "  b. Área de la superficie\n";
        cout << "Selección: ";
        cin >> opcion;
        opcion = tolower(opcion);

        if (opcion != 'a' && opcion != 'b') {
            cout << "Selección inválida. Intente de nuevo.\n";
        }
    } while (opcion != 'a' && opcion != 'b');

    // Formatear la salida para mostrar 2 decimales
    cout << fixed << setprecision(2);

    // Uso de if-else en lugar de switch para determinar la figura
    if (figura == 'a') { // Cilindro
        double r = pedirPositivo("Ingrese el radio del cilindro: ");
        double h = pedirPositivo("Ingrese la altura del cilindro: ");

        if (opcion == 'a') {
            cout << "El volumen del cilindro es " << volumen(r, h) << " unidades cúbicas.\n";
        } else {
            cout << "El área de la superficie del cilindro es " << areaSuperficie(r, h) << " unidades cuadradas.\n";
        }
    } else if (figura == 'b') { // Esfera
        double r = pedirPositivo("Ingrese el radio de la esfera: ");

        if (opcion == 'a') {
            cout << "El volumen de la esfera es " << volumen(r) << " unidades cúbicas.\n";
        } else {
            cout << "El área de la superficie de la esfera es " << areaSuperficie(r) << " unidades cuadradas.\n";
        }
    } else if (figura == 'c') { // Prisma rectangular
        double l = pedirPositivo("Ingrese el largo del prisma: ");
        double w = pedirPositivo("Ingrese el ancho del prisma: ");
        double h = pedirPositivo("Ingrese la altura del prisma: ");

        if (opcion == 'a') {
            cout << "El volumen del prisma es " << volumen(l, w, h) << " unidades cúbicas.\n";
        } else {
            cout << "El área de la superficie del prisma es " << areaSuperficie(l, w, h) << " unidades cuadradas.\n";
        }
    }

    return 0;
}
