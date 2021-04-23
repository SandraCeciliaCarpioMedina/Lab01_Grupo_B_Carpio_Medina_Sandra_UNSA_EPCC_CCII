#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int max=100;
	int suma=0;
	int cuadrado=0;
	
	 for(int i=0;i<=100;i++){
	 	suma=suma+i*i;
	 	cuadrado=cuadrado+i;
	 }
	 cuadrado=cuadrado*cuadrado;
	 cout<<"La suma es: "<<cuadrado-suma<<endl;
	
	system("pause");
	return 0;
}
