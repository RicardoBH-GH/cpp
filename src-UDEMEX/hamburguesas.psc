Algoritmo hamburguesas
	Definir costBurguer,subtotal,simple,inconmensurable,jumbo,cobroComision,comTarjeta,totalPay Como Real
	Definir burguer,s,i,j,payment Como Caracter
	Definir qtyBurguer,tipoPago Como Entero
	simple <- 50; inconmensurable <- 70; jumbo <- 90; comTarjeta <- 0.03;
	s <- 'simple'; i <- 'inconmensurable'; j <- 'jumbo';
		// seleccionar tipo de hamburguesa
	Escribir '�Qu� tipo de hamburguesa desea? (s,i,j)'
	Mientras burguer == 'z' Hacer
		Leer burguer;
		Segun burguer Hacer
			's','S':
				typeburguer <- s; costBurguer <- simple
			'i','I':
				typeburguer <- i; costBurguer <- inconmensurable
			'j','J':
				typeburguer <- j; costBurguer <- jumbo
			De Otro Modo:
				burguer <- 'z'; Escribir 'reingrese selecci�n (s,i,j)'
		FinSegun
	Fin Mientras
		// solicitud cantidad de hamburguesas	
	Escribir '�Cu�ntas hamburguesas?'
	Mientras qtyBurguer <= 0 Hacer
		Leer qtyBurguer
		Si qtyBurguer<=0 Entonces
			Escribir 'Al menos debe pedir una'
		FinSi
	Fin Mientras
		// calculo de total por hamburguesas	
	subtotal <- costBurguer*qtyBurguer
	cobroComision <- subtotal*comTarjeta
		// Aviso de cobro de comisi�n con tarjeta
	Escribir '�c�mo desea pagar?',"1.Efectivo  2.Tarjeta (cargo de comisi�n)"
	Mientras tipoPago == 0 Hacer
		Leer tipoPago
		Si tipoPago==1 Entonces
			totalPay <- subtotal
			payment <- 'EFECTIVO'
		SiNo
			Si tipoPago==2 Entonces
				totalPay <- subtotal+cobroComision
				payment <- 'TARJETA'
			SiNo
				tipoPago <- 0
				Escribir 'unico medio de pago: 1 � 2'
			FinSi
		FinSi
	Fin Mientras
	// RESUMEN DE MONTO, CANTIDAD Y TIPO DE HAMBURGUESA	
	Escribir 'Son ',totalPay,' de las ',qtyBurguer,' hamburguesas ',typeburguer
	Escribir 'con pago en ',payment
FinAlgoritmo
