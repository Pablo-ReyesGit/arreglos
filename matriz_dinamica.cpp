#include<iostream>
using namespace std;
int main(){
	int filas, columnas;
	cout<<"ingrese filas y columnas"<<endl;
	cin>>filas;
	cin>>columnas;
	int matriz[filas][columnas];
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"ingrese los valores"<<endl;
			cin>>matriz[i][j];
		}
		cout<<"_____________________"<<endl;
	}
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<i<<" "<<j<<" "<<matriz[i][j]<<endl;
		}
	}
	system("pause");
}

