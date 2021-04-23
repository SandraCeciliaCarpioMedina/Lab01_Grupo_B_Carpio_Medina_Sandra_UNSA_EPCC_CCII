/*si p^2+t^2=g^2//  3^2+4^2=9+16=25=>5^2
si a<b<c
Existe exactamente un triplete pitagórico para 
el cual a + b + c = 1000
Halla el producto abc .

*/
#include <iostream>
#include<stdlib.h>
#include <math.h>

using namespace std;

int main ()
{
	int c=2;
	double aux;

	for (int a=0; a < 1000; a ++)
	{
		for (int b = 2; b < 1000; b ++)//a mayor que b 
		{
			aux = pow (a,2) + pow(b, 2);
			aux = sqrt(aux);
			
			if (fmod(aux,1) == 0) // redondea a entero
			{
				c = (int) aux;
				if (c > b && b > a)
				{
					if (a + b + c == 1000) 
					{
						cout << "a = "<<a<<"  Su cuadrado   "<<"a^2= "<<pow(a,2)<<endl;
						cout << "b = "<<b<<"  Su cuadrado   "<<"b^2= "<<pow(b,2)<<endl;
						cout << "c = "<<c<<"  Su cuadrado    "<<"c^2=  "<<pow(c,2)<<endl;
						cout <<"La Multiplicacion  a*b*c es "<<endl;
						cout << a * b * c << endl;
						
						return 0;
					}
					if (a + b + c > 1000) b = 2000; 
				}
			}
		}
	}		
		
	cout <<"No es Triple Pitagora especial";
	cout<<endl;
	system("pause");
	return 0;
}
