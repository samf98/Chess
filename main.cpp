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

int main(int argc, char const *argv[]){
	const int ROWS = 8;
	const int COLS = 8;
	Piece** tablero = crearTablero(ROWS,COLS);









	destruirTablero(tablero,ROWS,COLS);
	return 0;
}
Piece** crearTablero(int rows, int cols){
	Piece** retval = new Piece*[rows];
	for (int i = 0; i < rows; ++i)	{
		retval[i] = new Piece[cols];
	}
	chessInit(retval);
	return retval;
}
destruirTablero(Piece** tablero, int rows, int cols){
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
	tablero[0][0] = Rook('B',0,0);
	tablero[0][7] = Rook('B',0,7);
	//caballos
	tablero[0][1] = Knight('B',0,1);
	tablero[0][6] = Knight('B',0,6);
	//alfiles
	tablero[0][2] = Bishop('B',0,2);
	tablero[0][5] = Bishop('B',0,5);
	//rey
	tablero[0][3] = King('B',0,3);
	//reina
	tablero[0][4] = Queen('B',0,4);
	//peones
	for (int i = 0; i < 8; ++i){
		tablero[1][i] = Pawn('B',1,i);
	}
	//piezas negras
	//torres
	tablero[7][0] = Rook('N',7,0);
	tablero[7][7] = Rook('N',7,7);
	//caballos
	tablero[7][1] = Knight('N',7,1);
	tablero[7][6] = Knight('N',7,6);
	//alfiles
	tablero[7][2] = Bishop('N',7,2);
	tablero[7][5] = Bishop('N',7,5);
	//rey
	tablero[7][3] = King('N',7,3);
	//reina
	tablero[7][4] = Queen('N',7,4);
	//peones
	for (int i = 0; i < 8; ++i){
		tablero[6][i] = Pawn('B',6,i);
	}
}