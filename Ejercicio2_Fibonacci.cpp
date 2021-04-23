/*se usa recursividad
0,1,1,2,3,5,8.13......
n=indice o posiciones 

 Son las posiciones 0 y 1        fibo(n)=n  ; si n<2    Caso base 
Suma los dos numeros anteriores  fibo(n-1)+fibo(n-2) si n>=2

*/
#include <iostream>
#include <stdlib.h>
#include<math.h>
using namespace std;
//Prototipo
int fibonacci(int);
int sum=0;
int main (){
	//LARGO DE FIBONNACCI
	long long cant=4000000;
	int k;
	
	
	for(int i=0;i<cant;i++){
		cout<<"Posicion: "<<k++<<"   " <<fibonacci(i)<<" "<<endl;
	//Suma de Pares		
	if(fibonacci(i)% 2==0){
		sum=sum+fibonacci(i);
		cout<<"La suma de solo pares es "<<sum<<endl; 			
		}	
	} cout<<"La suma de pares en total  es "<<sum<<endl; 
	cout<<"   "<<endl;	
		
	system ("pause");
	return 0;
}
//Serie fibonacci 
//Suma las posiciones  
int fibonacci (int n){	
	if (n<2){
		return n;	
	}
	else {
		return fibonacci(n-1)+fibonacci(n-2);
	}
		
}








