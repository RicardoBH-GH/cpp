Algoritmo iteracionFOR
	Definir NOMINA, SALARIO, empSalario como Real;
	Definir empTemp, choice, empleados Como Caracter;
	Definir I Como Entero; NOMINA = 0;
	Dimension empSalario(10), empleados(10);
	Para I<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Empleado: ", I;
		Repetir
			choice = 'S';
			Escribir "¿Nombre empleado ", I,"?"; Leer empTemp;
			Escribir "Salario de ", empTemp,"?"; Leer SALARIO;
			Escribir "El salario de ",empTemp," es de $",SALARIO;
			Escribir "¿Quieres realizar cambios (S/N)?"; Leer choice;
			Si choice == 'S' Entonces
				choice = 'R'; Escribir "Reingresa datos empleado ",I;
			SiNo choice = 'C';
				empSalario(I)=SALARIO;empleados(I)=empTemp;
			Fin Si
		Hasta Que choice = 'C';
		NOMINA = NOMINA + empSalario(I);
	Fin Para
	Escribir "Se alcanzó el máximo de empleados permitido (10)";
	Para I<-1 Hasta 10 Con Paso 1 Hacer
		Escribir I, ")", empleados(I), " : $ ", empSalario(I);
	Fin Para
	Escribir "La nomina por pagar es de: $", NOMINA;
FinAlgoritmo
