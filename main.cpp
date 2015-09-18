#include <iostream>
#include <string>
#include "position.hpp"
#include "piece.hpp"
#include "king.hpp"
#include "queen.hpp"
#include "knight.hpp"
#include "bishop.hpp"
#include "rook.hpp"
#include "pawn.hpp"

using namespace std;

Piece** crearTablero(int rows, int cols);
void destruirTablero(Piece** tablero, int rows, int cols);
void imprimir(Piece** tablero);
void chessInit(Piece** tablero);
int charToInt(char coordenada);


int main(int argc, char const *argv[]){
	const int ROWS = 8;
	const int COLS = 8;
	Piece** tablero = crearTablero(ROWS,COLS);

	string nombre1,nombre2;
	cout<<"Jugador1 ingrese su nombre: "<<endl;
	cin>>nombre1;
	cout<<"Jugador2 ingrese su nombre: "<<endl;
	cin>>nombre2;
	int turno=1;
	bool gano=false;
	char coordenada1, coordenada2;	
	while(gano){
		turno += 1;
		int x=0,y=0,x1=0,y1=0;
		if (turno % 2 == 1) {
			
			cout<<"Turno de: "<<nombre1<<endl;
			cout<<"Ingrese columna de la pieza que desea mover: ";
			cin>>x;
			cout<<"Ingrese fila de la pieza que desea mover: ";
			cin >> coordenada1;
			y = charToInt(coordenada1);
			cout<<"Ingrese columna a la desea mover la pieza: ";
			cin>>x1;
			cout<<"Ingrese fila a la desea mover la pieza: : ";
			cin >> coordenada2;
			y1 = charToInt(coordenada2);

			tablero[y][x].moveTo(tablero,x1,y1);


		}else{

			cout<<"Turno de: "<<nombre2<<endl;
			cout<<"Ingrese columna de la pieza que desea mover: ";
			cin>>x;
			cout<<"Ingrese fila de la pieza que desea mover: ";
			cin >> coordenada1;
			y = charToInt(coordenada1);
			cout<<"Ingrese columna a la desea mover la pieza: ";
			cin>>x1;
			cout<<"Ingrese fila a la desea mover la pieza: : ";
			cin >> coordenada2;
			y1 = charToInt(coordenada2);

			tablero[y][x].moveTo(tablero,x1,y1);
		}
	}

	destruirTablero(tablero,ROWS,COLS);
	return 0;
}
Piece** crearTablero(int rows, int cols){
	Piece** retval = new Piece*[rows];
	for (int i = 0; i < rows; ++i)	{
		retval[i] = new Piece[cols];
	}
	for (int i = 0; i < rows; ++i){
		for (int j = 0; j < cols; ++j){
			retval = NULL;
		}
	}
	chessInit(retval);
	return retval;
}
void destruirTablero(Piece** tablero, int rows, int cols){
	for (int i = 0; i < cols; ++i)	{
		delete[] retval[i];
	}
	delete[] retval;
}
void imprimir(Piece** tablero){//imprimir tablero
	char letras[] = "ABCDEFGH";
	int numeros[] = {1,2,3,4,5,6,7,8};
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j)	{
			cout << "[" << tablero[i][j].toString() << "]";
		}
		cout << letras[i] << endl;
	}
	for (int i = 0; i < 8; ++i)	{
		cout << " " << numeros[i] << " ";
	}
	cout << endl;
}
void chessInit(Piece** tablero){//Inicializar tablero
	//piezas blancas
	//torres
	tablero[0][0] = new Rook('B',0,0);
	tablero[0][7] = new Rook('B',0,7);
	//caballos
	tablero[0][1] = new Knight('B',0,1);
	tablero[0][6] = new Knight('B',0,6);
	//alfiles
	tablero[0][2] = new Bishop('B',0,2);
	tablero[0][5] = new Bishop('B',0,5);
	//rey
	tablero[0][3] = new King('B',0,3);
	//reina
	tablero[0][4] = new Queen('B',0,4);
	//peones
	for (int i = 0; i < 8; ++i){
		tablero[1][i] = new Pawn('B',1,i);
	}
	//piezas negras
	//torres
	tablero[7][0] = new Rook('N',7,0);
	tablero[7][7] = new Rook('N',7,7);
	//caballos
	tablero[7][1] = new Knight('N',7,1);
	tablero[7][6] = new Knight('N',7,6);
	//alfiles
	tablero[7][2] = new Bishop('N',7,2);
	tablero[7][5] = new Bishop('N',7,5);
	//rey
	tablero[7][3] = new King('N',7,3);
	//reina
	tablero[7][4] = new Queen('N',7,4);
	//peones
	for (int i = 0; i < 8; ++i){
		tablero[6][i] = new Pawn('B',6,i);
	}
}
int charToInt(char coordenada){
	switch (coordenada){
		case 'a':
			return 0;
		case 'b':
			return 1;
		case 'c':
			return 2;
		case 'd':
			return 3;
		case 'e':
			return 4;
		case 'f':
			return 5;
		case 'g':
			return 6;
		case 'h':
			return 7;
		case 'A':
			return 0;
		case 'B':
			return 1;
		case 'C':
			return 2;
		case 'D':
			return 3;
		case 'E':
			return 4;
		case 'F':
			return 5;
		case 'G':
			return 6;
		case 'H':
			return 7;
		default:
			return -1;
	}
}