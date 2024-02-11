#include <iostream>
#include <math.h>
using namespace std;

void imprimirResultados(int opera);

float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);
int divisionAbsoluta(int num1, int num2);



int main(){
	int cantOperaciones;
	
	cout << "Ingresa la cantidad de operaciones que deseas realizar: ";
	cin >> cantOperaciones;
	
	for(int x = 1; x <= cantOperaciones; x++){
		system("cls");
		int operacion;
		cout << "Operacion numero " << x << endl << endl;
		cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Division Absoluta\n\n";
		cout << "Elige la operacion que deseas realizar: ";
		cin >> operacion;
		system("cls");
		imprimirResultados(operacion);
	}
	system("cls");
	cout << "Operaciones terminadas" << endl;
	return 0;
}

int divisionAbsoluta(int num1, int num2){
	return num1 % num2;
}

float suma(float num1, float num2) {
	return num1 + num2;
}

float resta(float num1, float num2) {
	return num1 - num2;
}

float multiplicacion(float num1, float num2) {
	return num1 * num2;
}

float division(float num1, float num2) {
	return num1 / num2;
}

void imprimirResultados(int opera){
	
	if (opera < 1 or opera > 5){
		//system("cls");
		cout << "Opcion invalida" << endl;
		system("pause");
		return;
	}
	float num1, num2;
	cout << "Ingrese el 1er numero: ";
	cin >> num1;
	cout << "Ingrese el 2do numero: ";
	cin >> num2;
	switch(opera){
		case 1:
			cout << "El resultado es: " << suma(num1, num2) << endl;
			break;
		case 2:
			cout << "El resultado es: " << resta(num1, num2) << endl;
			break;
		case 3: 		
			cout << "El resultado es: " << multiplicacion(num1, num2) << endl;
			break;
		case 4:			
			cout << "El resultado es: " << division(num1, num2) << endl;
			break;
		case 5: 		
			cout << "El resultado es: " << divisionAbsoluta(num1, num2) << endl;
			break;
	}
	system("pause");	
}
