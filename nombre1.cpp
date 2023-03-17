#include<iostream>
using namespace std;
int main(){
	int dato;
	cout<<"ingrese el dato"<<endl;
	cin>>dato;
	cin.ignore();
	string nombre1;
	cout<<"cual es su nombre"<<endl;
	getline(cin,nombre1);
	cout<<nombre1<<endl;
	cout<<dato;
	system("pause");
}
