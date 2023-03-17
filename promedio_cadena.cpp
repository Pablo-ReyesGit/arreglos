#include<iostream>
using namespace std;
int main(){
	int size, suma, i;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>size;
	int notas[size];
	for(i=0; i<size;i++){
		cout<<"ingrese nota "<<i<<endl;
		cin>>notas[i];
	}
	for(i=0; i<size;i++){
		suma+=notas[i];
	}
	cout<<"el promedio es: "<<suma/size<<endl;
	system("pause");
}
