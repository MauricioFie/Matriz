
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int celcol[100][100], filas, columnas;
	
		cout<<"digite el numero de filas: ";
		cin>>filas;
		cout<<"digite el numero de columnas: ";
		cin>>columnas;
	
	for(int x=0; x<filas;x++){
		for(int i=0; i<columnas;i++){
			cout<<"digite un numero ["<<x<<"]["<<i<<"]";
			cin>>celcol[x][i];
		}
	}
	
	for(int x=0; x<filas;x++){
		for(int i=0; i<columnas;i++){
			cout<<celcol[x][i];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
