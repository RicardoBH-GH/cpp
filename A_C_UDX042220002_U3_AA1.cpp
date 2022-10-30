/* UDEMEX - LIA - Algoritmos Computacionales G2
    Alumno: Ricardo César Bartolomé Hdez
    Matricula: UDX042220002
    Actividad: U3_AA1 - Estructura selectiva en C++
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
#define i cin
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
    const int anyoActual=2022;
    const int anyoEleccion=2024, mesEleccion=6, diaEleccion=2;
    string namePerson;
    int diaNto,mesNto,anyoNto,edad;
    
        // INICIA ENCABEZADO        
    o << "  UDEMEX - LIA - Algoritmos Computacionales G2"<<endl;
    o << "     Actividad 3.1: Estructuras selectivas"<<endl;
    o << "     Autor: RicardoBH - UDX042220002"<<endl<<endl;
        // SE SOLICITAN DATOS DEL USUARIO, CONFIRMANDO SEAN VALIDOS    
    o << char(QW_open)<<"C\xA3"<<"al es su nombre?"; getline(i,namePerson);
    o << "Requerimos su fecha de nacimiento, comenzando por..."<<endl;
    o << "D\xA1"<<"a: "; i>>diaNto;
    while (diaNto > 31 || diaNto < 1){
        o<<"Digite un d"<<"\xA1"<<"a de nacimiento v\xA0lido entre 1 y 31. \nIntente de nuevo ";
        i>>diaNto;
    }
    o << "Mes: "; i>>mesNto;
    while (mesNto > 12 || mesNto < 1){
        o<<"Digite un mes de nacimiento v\xA0lido entre 1 y 12.\nIntente de nuevo ";
        i>>mesNto;
    }
    o << "A\xA4o: "; i>>anyoNto;
    while (anyoNto > anyoActual || anyoNto < 1900){
        o<<"Digite un a\xA4o de nacimiento v\xA0lido (4 digitos).\nIntente de nuevo ";
        i>>anyoNto;
    }
//COMIENZA EL CALCULO DE LA EDAD
    edad = anyoEleccion - anyoNto;
    if (mesNto > mesEleccion){
        edad = edad -1;
    } else if (mesNto == mesEleccion){
        if (diaNto > diaEleccion){    
            edad = edad - 1;
        }
    }    
    o << "\n\n";
    o << headerAsterisk<<headerAsterisk<<headerAsterisk<<endl;
    o << headerAsterisk<< "  Sistema  de  verificaci\xA2n  electoral  "<<headerAsterisk<<endl;
    o << headerAsterisk<< "       Fecha elecci\xA2n:02-jun-2024       "<<headerAsterisk<<endl;
    o << headerAsterisk<<headerAsterisk<<headerAsterisk<<endl;
    
    if (edad >= 18){
    o << char(exclama) <<"FELICIDADES, "<<namePerson<<"! El d\xA1"<<"a de la elecci\xA2n tendr\xA0s ";
    o <<edad<<" a\xA4os,"<<endl;
    o << "eso significa que eres " + comillas + "MAYOR DE EDAD" + comillas + " y ";
    o << "S\xD6 podras votar en las pr\xA2ximas elecciones."<<endl;
    } else {
    o << namePerson<<", Lamentamos informar que el d\xA1"<<"a de la elecci\xA2n tendr\xA0s ";
    o << edad <<" a\xA4os."<<endl;
    o << "Eso significa que ser\xA0s " + comillas + "MENOR DE EDAD" + comillas + " y NO ";
    o << "podras votar en las pr\xA2ximas elecciones."<<endl;
    }
    

    o << "\nFin de programa\n";

    return 0;
}