#include <iostream>
#include <stdlib.h>
using namespace std;

int Palindromo(char* numero, int digito)
{
	for (int i = 0; i < digito / 2; i++)
	{
		if (numero[i] != numero[digito - 1 - i])
			return 0;	// Si no es palindromo
	}
	
	return 1;
}

int numero_Digitos(int numero)
{
	int aux, digito;
	aux = numero;
	for (digito = 0; ; )
	{
		if ((aux % 10 != 0) || (aux / 10 != 0))
			digito ++;
		else
			break;
		aux = aux / 10;
	}
	
	return digito;
}

char* memoria(int i)
{
    static char output[10];  
    char* ap = &output[9];

	i *= 10; 
    for(*ap--=0; i/=10; *ap--=i%10+0x30);
    *ap = i % 10; 
    return ++ap;    
}


int main (int argc, char* argv[])
{
	int numero, maxDigito = 3, numero1 = 100,numero2 = 100, Pal = 0,
	  factor1=0, factor2=0, comb1 = 0, comb2 = 0;
	
	
	for (;!comb1 || !comb2;)
	{
		// Producto polindromo
		numero = numero1 * numero2;
		if (Palindromo(memoria(numero), numero_Digitos(numero)))
		{
			if (numero > Pal)
				Pal = numero;
			factor1 = numero1;
			factor2 = numero2;
		}
		
		// aumento de los producto
		if (!comb1)
		{
			if (numero_Digitos(numero1 + 1) > maxDigito)
				comb1 = 1;
			else
				numero1 ++;
		}
		else if (!comb2)
		{
			if (numero_Digitos(numero2 + 1) > maxDigito)
				comb2 = 1;
			else
			{
				numero2 ++;
				
				numero1 = 100;
				comb1 = 0;
			}
		}
	}
	cout << "Palindromo:  " << Pal;
	cout <<endl;
	system("pause");
	return 0;
}
