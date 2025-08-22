#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main (){
	int i, n, h, eh, opc, a=300, b=350, c=400; 
	long long tot=1, ts;
	do {
	cout << "Bienvenido, seleccione una opcion:" << endl;
	cout << "1. Factorial de un numero" << endl;
	cout << "2. Subsidio de una familia" << endl;
	cout << "3. Salir" << endl;
	cin >> opc;
	if (cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
	}
	system ("cls");
	switch (opc){
		case 1:
			cout << "Ingrese un numero:" << endl;
			cin >> n;		
			while (cin.fail() || n<0) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Error, ingrese un numero entero positivo " << endl;
			cin >> n;
			}
			for (i=1; i<=n; i++)
			tot =tot* i;
			cout << "El factorial de " << n << " es: " << tot << endl;
			tot =1;	
			cout << "Presione cualquier tecla para regresar al menu" << endl;	
			_getch();
			break;
		case 2:
			cout << "Ingrese el numero de hijos que tengan: " << endl;
			cin >> h;
				while (cin.fail() || h<0) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Error, opcion invalida " << endl;
			cout << "Ingrese el numero de hijos que tengan: "<< endl;
			cin >> h;
			}
			
			if (h<0){
			cout << "Opcion invalida" << endl;
			cout << "Presione una tecla para regresar al menu"<< endl;
			_getch ();
			break;
			}
			if (h==0 || h==1 || h==2){
			cout << "Lo sentimos el subsidio solo aplica a familias con 3 o mas hijos"<< endl;
			cout << "Presione cualquier tecla para regresar al menu"<< endl;
			_getch ();
			break;
				}
			if (h==3){
			cout << "Cuantos hijos tiene entre los 7 y 18 años: " << endl;
			cin >> eh;
				 while (cin.fail() || eh> h || eh<0){
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "No puede ingresar un valor distinto al rango de hijos: " << h << " que declaro inicialmente" << endl;
				cout << "Ingrese un valor que este dentro del rago declarado nuevamente:" << endl;
				cin >> eh;
				}
				ts= (a+(eh*(a*0.06)));
				cout << "Su subsidio corresponde a un total de Q" << ts << endl;
				cout << "Presione cualquier tecla para regresar al menu"<< endl;	
				_getch ();
				break;
				}
			if (h==4 || h==5){
				cout << "Cuantos hijos tiene entre los 7 y 18 años: " << endl;
				cin >> eh;
				 while (cin.fail() || eh> h || eh<0){
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "No puede ingresar un valor distinto al rango de hijos: " << h << " que declaro inicialmente" << endl;
				cout << "Ingrese un valor que este dentro del rago declarado nuevamente:" << endl;
				cin >> eh;
				}
				ts= (b+(eh*(b*0.06)));
				cout << "Su subsidio corresponde a un total de Q" << ts << endl;
				cout << "Presione cualquier tecla para regresar al menu"<< endl;	
				_getch ();
				break;
				}
			if (h>5){
				cout << "Cuantos hijos tiene entre los 7 y 18 años: " << endl;
				cin >> eh;
					 while (cin.fail() || eh> h || eh<0){
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "No puede ingresar un valor distinto al rango de hijos: " << h << " que declaro inicialmente" << endl;
				cout << "Ingrese un valor que este dentro del rago declarado nuevamente:" << endl;
				cin >> eh;
				}
				ts= (c+(eh*(c*0.06)));
				cout << "Su subsidio corresponde a un total de Q" << ts << endl;
				cout << "Presione cualquier tecla para regresar al menu"<< endl;	
				_getch ();
				break;	
			}
		_getch();
		break;
	
		case 3:
			cout << "Hasta luego" << endl;
			return 0;
			break;	
		default:
		cout << "Opcion invalida, selccione una de las opciones descritas en el menu"<< endl;
					  }
	} while (opc !=3);
	return 0;
}
		
	
