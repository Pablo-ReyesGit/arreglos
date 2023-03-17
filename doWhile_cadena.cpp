#include<iostream>
using namespace std;
int main(){
	int size, suma, i;
	int notas[size];
	char res;
	do{
		size++;
		cout<<"ingrese nota" <<size<<endl;
		cin>>notas[size-1];
		cout<<"Desea ingresar otra nota(s\n): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	for(i=0; i<size; i++){
		suma+=notas[i];
	}
	cout<<"el promedio es: "<< suma/size;
	system("pause");
}
