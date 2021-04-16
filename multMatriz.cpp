#include <iostream>

using namespace std;

void datosM1(int);
void datosM2(int);
void printM1();
void printM2();
void mult();
void printMR();

static int num;
//M[m][n] * M[n][p] = M[m][p]
int matriz1[4][3], matriz2[3][3], matrizR[4][3];

int main() {
	cout<<"Multiplicar M(4x3) * M(3x3)"<<endl;
	cout<<"Ingresa los datos de la matriz 1"<<endl;
	datosM1(num);
	cout<<"ingresa los datos de la matriz 2"<<endl;
	datosM2(num);

	system("cls");

	cout<<"Matriz 1"<<endl;
	printM1();
	cout<<endl;
	cout<<"Matriz 2"<<endl;
	printM2();
	cout<<endl;
	mult();
	cout<<"Matriz Resultado"<<endl;
	printMR();

	return 0;
}

void datosM1(int n) {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<"ingresa el numero de la posicion "<<i<<", "<<j<<" : ";
			cin>>n;

			matriz1[i][j] = n;
		}
	}
}

void datosM2(int n) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<"ingresa el numero de la posicion "<<i<<", "<<j<<" : ";
			cin>>n;

			matriz2[i][j] = n;
		}
	}
}


void printM1() {
	for(int i = 0; i < 4; i++) {
		cout<<"[ ";

		for(int j = 0; j < 3; j++) {
			cout<<"["<<matriz1[i][j];
			(j != 2) ? cout<<"], " : cout<<"]";
		}

		cout<<" ]";
		cout<<endl;
	}
}

void printM2() {
	for(int i = 0; i < 3; i++) {
		cout<<"[ ";

		for(int j = 0; j < 3; j++) {
			cout<<"["<<matriz2[i][j];
			(j != 2) ? cout<<"], " : cout<<"]";
		}

		cout<<" ]";
		cout<<endl;
	}
}

void mult() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				matrizR[i][j] += (matriz1[i][k] * matriz2[k][j]);
			}
		}
	}
}

void printMR() {
	for(int i = 0; i < 4; i++) {
		cout<<"[ ";

		for(int j = 0; j < 3; j++) {
			cout<<"["<<matrizR[i][j];
			(j != 2) ? cout<<"], " : cout<<"]";
		}

		cout<<" ]";
		cout<<endl;
	}
}