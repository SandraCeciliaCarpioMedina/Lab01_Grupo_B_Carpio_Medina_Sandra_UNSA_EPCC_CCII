/* Factor primo mas grande
1-Encuentra el numero primo mas bajo que se divide impiamente
2-Verifique si el resultado de la division es primo
3-Si no .encontremos el siguiente mas bajo
4-Ir a 2 por que un numero primo es un numero  natural mayor que 1.

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
int main()
{
	long long int numero = 600851475143;
    //long long int numero = 13195;              
    
    for( long long int i = 2; i < numero; i++){  
      if(numero % i == 0){
           numero=numero/ i;
       
      }
    }    
 cout<<"El maximo factor primo  es: "<<numero;
 cout<<endl;  
    system("pause");  
    return 0;
}  

