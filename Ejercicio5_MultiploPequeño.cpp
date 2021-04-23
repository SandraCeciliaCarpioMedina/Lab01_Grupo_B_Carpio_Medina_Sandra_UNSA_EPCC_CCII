//debemos hallar el m.c.m del 1 al 20
/**/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
int tamano = 40;
int i = 10;

while (i<20){
    if (tamano%i == 0){
        i++;
        continue;
    }
    else{
        i = 10;
        tamano = tamano+20;
    }
    }
    cout << "El numero pequeño es: "<<tamano;
    cout<<endl;
    system("pause");
    return 0;
}
