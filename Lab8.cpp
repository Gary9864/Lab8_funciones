#include <iostream>//pedir un numero al usuario y por medio de una funcion determinar si es perfecto,la suma de sus divisores es igual al numero
using namespace std;
int numero_perfecto(int n1){
   int divisores = 0;
   for (int i = 1; i < n1 ; i++)
   {
    if (n1 % i == 0)
    {
        divisores +=i;
    }
    
   }
   
    
    
    return divisores == n1 ;
}


int main(){
    int numero;
    cout << "Ingresa un numero" << endl;
    cin >> numero;

    if (numero_perfecto(numero))
    {
        cout << "Es un numero perfecto"<< endl;
    }else{
        cout << "No es numero perfecto"<< endl;
    }
    
    return 0;
}