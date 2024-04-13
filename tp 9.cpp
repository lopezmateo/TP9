#include<iostream>
using namespace std;
int main (){
	
 string nombre;
    float nota1, nota2, nota3, promedio;

    
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, nombre);

    
    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    
    promedio = (nota1 + nota2 + nota3) / 3.0;


    if (promedio >= 8 && promedio <= 10) {
        cout << "Excelente " <<endl<< nombre << endl;
    } else if (promedio >= 7) {
        cout << "Aprobo" <<endl<<
		 nombre << endl;
    } else {
        cout <<"Desaprobo" <<endl<< nombre << endl;
    }
  
  return 0;
}
