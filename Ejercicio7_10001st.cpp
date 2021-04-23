#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

//Primero saber si son primos
int num_primo(long numero) {
	if((numero < 2) ||(numero > 2 && (numero % 2) == 0)) {
		return 0;
	}	
	for(int i = 2; i < numero; i++ )
	{
		if ( (numero % i) == 0){
			return 0;
		}
	}
	return 1;
}

int main (int argc, char* argv[])
{
	int maxposci = 10001;
	int  i = 0;
	long primo = 0;
	
	do 
	{
		if (num_primo(++primo)){
			i ++;
		} 		
	}
	while (i != maxposci);
	
	cout << "La posicion 10000 es :  " << primo << endl;
	system("pause");	
	return 0;
}

