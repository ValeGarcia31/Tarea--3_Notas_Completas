#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Definición de variables
	int nota = 0;
	
	//Datos de entrada
	cout<<"Ingrese la nota del estudiante: ";
	cin>>nota;
	
	//Proceso
	if (nota > 100 || nota < 0){
		cout<<"Ingrese una nota entre 0 - 100";
		return 0;
	}
                                  
	if (nota >= 96 &&  nota <= 100)
	{
		cout<<"Usted obtuvo una A++";
	}
	
	if (nota >= 91 &&  nota <= 95){
			cout<<"Usted obtuvo una AD";
		}
		
	if (nota >= 86 &&  nota <= 90){
			cout<<"Usted obtuvo una A";
		}
		
	if (nota >= 81 &&  nota <= 85){
			cout<<"Usted obtuvo una A-";
		
		}
	if (nota >= 76 &&  nota <= 80){
			cout<<"Usted obtuvo una B+";
		}
	
	if (nota >= 71 &&  nota <= 75){
			cout<<"Usted obtuvo una B";
		}
	
	if (nota >= 66 &&  nota <= 70){
			cout<<"Usted obtuvo una B-";
		}
	
	if (nota >= 61 &&  nota <= 65){
			cout<<"Usted obtuvo una C+";
		}
	
	if (nota >= 56 &&  nota <= 60){
			cout<<"Usted obtuvo una C";
		}
	
	if (nota >= 51 &&  nota <= 55){
			cout<<"Usted obtuvo una C-";
		}
	
	if (nota >= 46 &&  nota <= 50){
			cout<<"Usted obtuvo una D+";
		}
	
	if (nota >= 41 &&  nota <= 45){
			cout<<"Usted obtuvo una D";
		}
	
	if (nota >= 36 &&  nota <= 40){
			cout<<"Usted obtuvo una D-";
		}
	
	if (nota >= 31 &&  nota <= 35){
			cout<<"Usted obtuvo una E+";
		}
	
	if (nota >= 26 &&  nota <= 30){
			cout<<"Usted obtuvo una E";
		}
	
	if (nota >= 21 &&  nota <= 25){
			cout<<"Usted obtuvo una E-";
		}
	
	if (nota >= 16 &&  nota <= 20){
			cout<<"Usted obtuvo una F+";
		}
	
	if (nota >= 11 &&  nota <= 15){
			cout<<"Usted obtuvo una F";
		}
	
	if (nota >= 6 &&  nota <= 10){
			cout<<"Usted obtuvo una F";
		}
	
	if (nota >= 1 &&  nota <= 5){
			cout<<"Usted obtuvo una F-";
		}
		
	if (nota < 1){
			cout<<"Usted obtuvo una F--";
		}
	
	return 0;
}
