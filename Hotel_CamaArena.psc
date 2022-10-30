Algoritmo Hotel_CamaArena
	Definir priceRoom Como Entero;
	Definir IVA como Real;
	Definir days, payment Como Entero;
	Definir paymentInvoice Como Real;
	priceRoom<-200;
	IVA<-16;
	Escribir "días de estancia?";
	Leer days;
	payment <- priceRoom*days;
	paymentInvoice <- payment * (1+(IVA/100));
	Escribir "Pago normal por estancia",payment;
	Escribir "Monto pago con impuestos",paymentInvoice; 
FinAlgoritmo