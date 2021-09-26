#include "iostream"
#include "string"
using namespace std;

int main(){
int p1, p2, p3, p4; //declaracion de varibales en numero enteros
float q, d, cant1, result1;// declaracion de varibles en numeros reales 
p1 =2021; // declaracion de p1 como valor 2021

do 
{cout<< "Bienvenido al banco vitual" << "\n"; // mensaje en pantalla para darle al bienvenida a cualquier usuario
cout<< "Ingresar la contraseña" << "\n"; // mensaje en pantalla que le pide a cualquier usurio el ingreso de su contraseña
cin >> p2;
if (p2 != p1) // condicion si el usuario no escribe correctamente la contraseña
cout << "Contraseña incorrecta" << "\n";} // mensaje en pantalla si el usuario escribe mal la contrasela

while (p2 != p1); // si se cumple la condicion de escribir correctamente la contraseña se procede a ejecutar el programa

cout << "Contraseña correcta" << "\n";	// mensaje en pantalla si el usurio escribe la contraseña correcta
cout << "\n";// salto de linea
cout << "Sea bienvenido usuario : ";	// mensaje en pantalla dando la bienvenida al usuario
cout << "Kenny Alexander torres sucup" << "\n"; // mensaje en pantalla mostrado el nombre 
cout << "Su numero de carnet es: 0909-21-1316" << "\n"; // mensaje en pantalla mostrado el numero de carnet 
cout << "\n"; // salto de linea 
cout << "Usted posee una tarjeta de credito" << "\n"; // mensaje en pantalla que le indica al usuario que tiene una tarjeta de credito
cout << "¿En que tipo de moneda desea ver su saldo?" << "\n"; // mensaje en pantalla preguntando en que tipo de moneda desea ver el saldo de la tarjeta
cout << "Opcion 1:  En dolares ($)"<< "\n"; // mensaje en pantalla primera opcion
cout << "Opcion 2:  En Quetzales (Q)"<< "\n";// mensaje en pantalla segunda opcion
cout << "opcion 3: salir" << "\n"; // mensaje en pantalla opcion para dejar de ejecutar el programa
cin >> p3; 

q = 5000.00; // variable para Quetzales (Q)
d = 650.00; // variable en Dolares ($)

switch (p3){
	case 1: // primera opcion
	cout <<"Su saldo en dolares es de: $"<< d << "\n"; // mensaje en pantalla mostrado el saldo en dolares
	cout <<"¿Que desea hacer con su saldo disponible?"<< "\n"; // mensaje en pantalla preguntado que accion se va a tomar con el dinero 
	cout << "Seleccione una de las siguientes opciones:" << "\n"; // mensaje en pantalla diciendo que seleccione una opcion 
	cout <<"Opcion 1: Una compra" << "\n"; // mensaje en pantalla primera opcion
	cout <<"Opcion 2: Pago en linea"<< "\n"; // mensaje en pantalla segunda opcion
	cin >> p4;
		
	switch (p4){
		case 1: // submenu primera opcion
			cout<< "Ingrese la cantidad de la compra que realizada" << "\n"; // mensaje en pantalla pide que ingrese la cantidad de la compra 
			cin >> cant1;
			if (cant1 > d) 
			{cout << "Su saldo es insuficiente" << "\n";} // mensaje en pantalla si la cantidad sobrepasa el saldo se mostrara este mensaje
			else 
			{result1= d- cant1;
			cout<< "Su saldo disponible es de: $" << result1 << "\n"; }// mensaje en pantalla si la cantidad no sobrepasa el saldo se restara la cantidad y se mostrar el total
			break;
			
			case 2: // submenu segunda opcion
			cout<< "Ingrese la cantidad del pago en linea que desee realizar" << "\n"; // mensaje en pantalla pide ingresar la cantidad del pago en linea
			cin >> cant1;
			if (cant1 > d) 
			{cout << "Su saldo es insuficiente" << "\n";} // mensaje en pantalla si la cantidad sobrepasa el saldo se mostrara este mensaje
			
			else 
			{result1= d- cant1;
			cout<< "Su saldo restante es de: $" << result1 << "\n"; } // mensaje en pantalla si la cantidad no sobrepasa el saldo se restara la cantidad y se mostrar el total
			break;}
		break;
	case 2:
	cout <<"Su saldo en Quetzales es de : Q"<< q << "\n"; // mensaje en pantalla mostrado el saldo en Quetzales
	cout <<"¿Que desea hacer con su saldo disponible?"<< "\n"; // mensaje en pantalla preguntado que accion se va a tomar con el dinero
	cout << "Seleccione una de las siguientes opciones:" << "\n"; // mensaje en pantalla diciendo que seleccione una opcion
	cout <<"Opcion 1: Una compra" << "\n"; // mensaje en pantalla primera opcion
	cout <<"Opcion 2: Pago en linea"<< "\n";// mensaje en pantalla segunda opcion
	cin >> p4;
		
	switch (p4){
		case 1: // submenu primera opcion
			cout<< "Ingrese la cantidad de la compra que realizada" << "\n"; // mensaje en pantalla pide que ingrese la cantidad de la compra 
			cin >> cant1;
			if (cant1 > q) 
			{cout << "Su saldo es insuficiente" << "\n";} // mensaje en pantalla si la cantidad sobrepasa el saldo se mostrara este mensaje
			else 
			{result1= q- cant1;
			cout<< "Su saldo disponible es de: Q" << result1 << "\n"; }// mensaje en pantalla si la cantidad no sobrepasa el saldo se restara la cantidad y se mostrar el total
			break;
			
			case 2: // submenu segunda opcion
			cout<< "Ingrese la cantidad del pago en linea que desee realizar" << "\n"; // mensaje en pantalla pide ingresar la cantidad del pago en linea
			cin >> cant1;
			if (cant1 > q) 
			{cout << "Su saldo es insuficiente" << "\n";} // mensaje en pantalla si la cantidad sobrepasa el saldo se mostrara este mensaje
			
			else 
			{result1= q- cant1;
			cout<< "Su saldo restante es de: Q" << result1 << "\n"; } // mensaje en pantalla si la cantidad no sobrepasa el saldo se restara la cantidad y se mostrar el total
			break;}
			break;
	case 3:
		cout << "se finalizo el programa con exito" << "\n"; // mensaje en pantalla que se muestra cuando el usurio usa la opcion 
		cout << "gracias por usar el servicio del banco vitual" << "\n"; // mensaje en pantalla cuando se seleccione la opcion 3 para salir del programa
		break;
}
}