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
	return retval;
}
destruirTablero(Piece** tablero, int rows, int cols){
	for (int i = 0; i < cols; ++i)	{
		delete[] retval[i];
	}
	delete[] retval;
}