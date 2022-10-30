/* UDEMEX - LIA - Algoritmos Computacionales G2
    Alumno: Ricardo César Bartolomé Hdez
    Matricula: UDX042220002
    Actividad: U3_AA2 - Estructura selectiva múltiple en C++
    Problema:
        Determinar si una persona, puede votar en las 
        elecciones del siguiente sexenio, conociendo 
        únicamente su año de nacimiento.
*/
#include<iostream>
#include<string.h>
#include<windows.h>

using namespace std;

#define o cout
//#define i cin
#define QW_open 168
#define exclama 173
const string comillas = "\"";

/*  **Carácteres especiales** 
        nbsp 
        á   \xA0    160     Á   \xB5    181
        é   \x82    130     É   \x90    144
        í   \xA1    161     Í   \xD6    214
        ó   \xA2    162     Ó   \xE0    224
        ú   \xA3    163     Ú   \xE9    233
        ñ   \xA4    164     Ñ   \xA5    165
        "   \"
*/

int main(){
    const string headerAsterisk = "****************************************"; //40 asteriscos
    const string indenta6 = "     -- "; //espacios para indentar los listados
        // INICIA ENCABEZADO        
    o << "  UDEMEX - LIA - Algoritmos Computacionales G2"<<endl;
    o << "     Actividad 3.2: Estructuras selectivas m\xA3ltiples"<<endl;
    o << "     Autor: RicardoBH - UDX042220002"<<endl<<endl;
        //  INICIO DE PROGRAMA DE RESTAURANTE
            // Declaración de variables
    const float simple=50, inconmensurada=70, jumbo=90, comTarjeta=0.03;
    const string s="SIMPLE", i="INCONMENSURABLE", j="JUMBO";
    float costBurguer, cobroComision, subtotal, totalPay;
    int tipoPago, qtyBurguer;
    string namae, typeBurguer = "null", payment;
    char burguer;

            //Solicitud de nombre para dar bienvenida y colocar encabezado
    o << char(QW_open)<<"C\xA3"<<"al es su nombre?"; getline(cin,namae);
    o << "\n\n";
    o << headerAsterisk<<headerAsterisk<<headerAsterisk<<endl;
    o << headerAsterisk<< "  "+comillas+"Restaurant: El Krustacio Kaskarudo"+comillas+"  "<<headerAsterisk<<endl;
    o << headerAsterisk<< " simple:$50/inconmesurada:$70/jumbo:$90 "<<headerAsterisk<<endl;
    o << headerAsterisk<<headerAsterisk<<headerAsterisk<<endl<<endl;

    o << "          "<<char(exclama)<<"Bienvenido, "+namae+"!\n\n"; 
    o << "Contamos con tres estilos de hamburguesa, puede observar los precios en el encabezado... "<<endl;
    o << char(QW_open)<<"Qu\x82 tipo de hamburguesa desea solicitar?\n";
            //Ciclo para evaluar TIPO DE HAMBURGUESA
    do
    {
    o << indenta6<<"(s)imple\n"<<indenta6<<"(i)nconmensurada\n"<<indenta6<<"(j)umbo\n\n"; cin >> burguer;
    switch (burguer){
        case 's':
        case 'S':
            typeBurguer = s; costBurguer = simple;
            o << "Seleccionaste la hamburguesa SIMPLE\n"; break;
        case 'i':
        case 'I':
            typeBurguer = i; costBurguer = inconmensurada;
            o << "Seleccionaste la hamburguesa INCONMENSURABLE\n"; break;
        case 'j':
        case 'J':
            typeBurguer = j; costBurguer = jumbo; 
            o << "Seleccionaste la hamburguesa JUMBO\n"; break;
        default:
            o << "S\xA2lo contamos con tres tipos de hamburguesa. Intenta de nuevo..."<<endl;
            o << "(selecciona la letra indicada: S,I,J)\n"; burguer='z';
    }
    } while (burguer == 'z');

                //solicitud de CANTIDAD DE HAMBURGUESAS
    do
    {
        o << char(QW_open)<<"Cu\xA0ntas hamburguesas desea?\n"; cin >> qtyBurguer; 
        if (qtyBurguer<=0)
        {
            o << "\n(Debe seleccionar al menos 1 hamburguesa para levantar su pedido)\n";
        }
    } while (qtyBurguer<=0);
    
                //genera precio a pagar con EFECTIVO y TARJETA    
    subtotal = costBurguer * float(qtyBurguer);
    cobroComision = subtotal * comTarjeta;
    
                //selección de TIPO DE PAGO    
    o << "\n"<<headerAsterisk<<" NOTA "<<headerAsterisk<<endl;
    o << "El subtotal de su compra es de: $ "<<subtotal<< " puede pagar en efectivo o con tarjeta,\n";
    o << "en cuyo caso de generar\xA0 un cargo del "<<comTarjeta*100<<"%, ($"<<cobroComision<<") ";
    o << "por concepto de COMISI\xE0N bancaria."<<endl<<endl;
    o << char(QW_open)<<"C\xA2mo desea pagar?\n";
    o << indenta6 << "1. Efectivo\n";
    o << indenta6 << "2. Tarjeta\n";
    do
    {
        cin >> tipoPago;
        if (tipoPago==1)
        {
            totalPay = subtotal;
            payment = "EFECTIVO";
        }
        else if (tipoPago==2)
        {
            totalPay = subtotal + cobroComision;
            payment = "TARJETA";
        }
        else
        {
            o << "Por el momento s\xA2lo contamos con dos formas de pago. Elija una opci\xA2n v\xA0lida: ";
            tipoPago=0;
        }
    } while (tipoPago==0);
            //RESUMEN DE PEDIDO
    o << "\n\n\n";
    o << char(exclama)<<char(exclama)<<"Excelente!! Su pedido de "<<qtyBurguer<<" hamburguesa(s) "<<typeBurguer;
    o << " ha quedado registrado. \n\nEl monto total a pagar es de $"<<totalPay<<" con "<<payment<<"."<<endl;

    o << headerAsterisk<<headerAsterisk<<headerAsterisk<<endl<<endl;
    o << "          "<<char(exclama)<<"Qu\x82 tenga un buen provecho!\n\n";
    o << headerAsterisk<<headerAsterisk<<headerAsterisk;

    return 0;
}