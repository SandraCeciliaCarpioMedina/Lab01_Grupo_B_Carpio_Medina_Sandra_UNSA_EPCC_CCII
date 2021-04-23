#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int total=0;	 
	 for(int i=0;i<1000;i++){
	 	if((i%3==0)||(i%5==0)){
	 		total=total+i;
	 				
	 	}	 	
	 }
	 cout<<"la suma es: "<<total<<endl;
	
	 system("pause");
	 return 0;
	
}
