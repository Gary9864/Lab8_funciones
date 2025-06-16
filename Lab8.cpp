#include <iostream>
using namespace std;
int numero_perfecto(int n1){ //la funcion para determinar si es perfecto o no
   int divisores = 0;// Quemo la variable en 0
   for (int i = 1; i < n1 ; i++) //determinar todos los divisores
   {
    if (n1 % i == 0)
    {
        divisores +=i;// sumar los divisores
    }
    
   }
   
    
    
    return divisores == n1 ;//los divisores seran acorde al numero que de el usuario
}


int main(){
    int numero;// numero que da el usuario
    cout << "Ingresa un numero" << endl;
    cin >> numero;

    if (numero_perfecto(numero))// la funcion para numero perfecto con el numero
    {
        cout << "Es un numero perfecto"<< endl;// si se cumple que es perfecto
    }else{
        cout << "No es numero perfecto"<< endl;// no se cumple
    }
    
    return 0;
}