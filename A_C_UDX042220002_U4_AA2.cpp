#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;
/*
    LIA - Algoritmos computacionales
    Autor: Ricardo Bartolomé [UDX042220002]
    Actividad: 4.2 Estructura FOR (desde...hasta que)

    "La UDEMEX requiere calcular el total de su nómina de acuerdo a los 10 trabajadores que laboran,
     de acuerdo a las siguientes variables:
        NOMINA Total de la nómina
        I Contador
        SALARIO Salario de los trabajadores
*/

#define QW_open 168
const int wideheader = 120;
const string asteriskGroup = "****************************************";

int main()
{
    // Definición de variables
    float NOMINA = 0, SALARIO, empSalario[10];
    string namae, empTemp, empleados[10];
    int I, z; char choice;

    cout << char(QW_open) << "Cu\xA0l es tu nombre?";
    getline(cin, namae);
    cout << endl;

    cout << "          Bienvenido: \"" << namae << "\"\n";
    cout << "Tenemos registrados 10 empleados en la UDEMEX, ";
    cout << "necesitamos introduzcas nombre y salario de cada uno:\n\n";

    cout << asteriskGroup<<asteriskGroup<<asteriskGroup<<endl;
    cout << asteriskGroup<<"        Sistema de nomina UDEMEX        "<<asteriskGroup<<endl;
    cout << asteriskGroup<<asteriskGroup<<asteriskGroup<<endl;

    for (I = 1; I <= 10; I++)
    {
        cout << "\nEmpleado: " << I << endl;
        do
        {
            choice = 'S';
            cout << "   " << char(QW_open) << "Nombre de empleado " << I << "?";
            cin >> empTemp;
            cout << "   " << char(QW_open) << "salario de " << empTemp << "?";
            cin >> SALARIO;
            cout << "El salario introducido para " + empTemp + " es de $" << SALARIO << endl;
            cout << char(QW_open) << "Quieres realizar cambios? (S/N)?";
            cin >> choice;
            if (choice == 's' || choice == 'S')
            {
                choice = 'R';
                cout << "\nReingresa los datos del empleado " << I << endl;
            }
            else
            {
                choice = 'C';
                empSalario[I - 1] = SALARIO;
                empleados[I - 1] = empTemp;
            }
        } while (choice != 'C');
        NOMINA = NOMINA + empSalario[I - 1];
    }

    cout << "\n\nSe alcanz\xA2 el m\xA0ximo de empleados, el resumen de empleados es: ";
    for (I = 0; I <= 9; I++)
    {
        cout << "\n          " << I+1 << ") " << empleados[I] << ": $ " << empSalario[I];
    }

    cout << "\n\nLa nomina por pagar es de: $" << NOMINA;
    cout << endl << endl;

    cout << asteriskGroup<<asteriskGroup<<asteriskGroup;
return 0;
}