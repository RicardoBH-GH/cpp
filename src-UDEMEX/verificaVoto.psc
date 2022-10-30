Algoritmo verificaVoto
	Definir anyoEleccion, mesEleccion, diaEleccion Como Entero;
	anyoEleccion=2024;mesEleccion=6;diaEleccion=2;
	Definir diaNto, mesNto, anyoNto, edad Como Entero;
	escribir "dia nacimiento:";
	leer diaNto;
	escribir "mes nacimiento:";
	leer mesNto;
	escribir "año nacimiento:";
	Leer anyoNto;
	edad = anyoEleccion - anyoNto;
	si mesNto > mesEleccion Entonces
		edad = edad - 1;
	sino
		si mesNto == mesEleccion Entonces
			si diaNto > diaEleccion entonces
				edad = edad -1;
			FinSi
		FinSi
	FinSi
	Escribir "Su edad es " edad;
	si edad >= 18 entonces 
		escribir "Sí vota";
	SiNo
		escribir "NO vota";
	FinSi
FinAlgoritmo