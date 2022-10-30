/* UDEMEX - LIA - Algoritmos Computacionales G2
    Alumno: Ricardo César Bartolomé Hdez
    Matricula: UDX042220002
    Actividad: U2_AA2
    Problema:
        El hotel "Cama Arena" requiere determinar lo que le debe cobrar a un huésped 
        por su estancia en una de sus habitaciones."
*/

//DIRECTIVAS DE PREPROCESADOR
#include <iostream>     //para incluir cin y cout
#include <string>       //manejo de cadenas de texto
#include <windows.h>    //
using namespace std; //para no tener que escribir STD constantemente en cin y cout
/*  **Carácteres especiales** 
        nbsp 
        á   \xA0    160
        é   \x82    130
        í   \xA1    161
        ó   \xA2    162
        ú   \xA3    163
        ñ   \xA4    164
        Ñ   \xA5    
*/
#define QW_open 168 //código ASCII para ¿
const string comillas = "\"";   //Colocado fuera de main, para que sea una constante global

int main()
{
    const int priceRoom=200;
    const float IVA=16;
    int days, payment;
    float paymentInvoice;
    
    cout << "\n****************************************************************************************************\n";
    cout << "**************************************** Hotel " + comillas + "Cama Arena" + comillas; 
    cout << " ****************************************";
    cout << "\n****************************************************************************************************\n";

    cout << "\n" << char(QW_open) << "De cu\xA0ntos d\xA1" << "as fue la estancia en la habitaci\xA2n?";
    cin >> days;

    payment = priceRoom * days;
    paymentInvoice = payment*(1+(IVA/100));

    cout << "El monto de la habitaci\xA2n por d\xA1" << "a es de: $" << priceRoom;
    cout << ", por lo cual el monto a pagar es de $" << payment;

    cout << "\n\n\nNOTA: En caso de requerir factura, deber\xA0 pagar el " << IVA << "%" << " adicional de IVA.";
    cout << "\nPor lo que el monto completo a pagar ser\xA0 de: $" << paymentInvoice << endl;
    

    system("pause");
    return 0;
}
