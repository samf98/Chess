#include "pawn.hpp"
#include "piece.hpp"
#include "position.hpp"
#include <string>
#include <cmath>

using namespace std;

Pawn::Pawn(char color, int x, int y):Piece(color,x,y){//constructor
	firstMove = true;
}
bool Pawn::isValidMove(Piece** board, Position destiny){
	int diffY = abs(position.getY()-destiny.getY());
	int diffX = abs(position.getX()-destiny.getX());
	if((diffY==1&&diffX==0) || (diffY==2&&firstMove&&diffX==0){ //primer movimiento o movimiento hacia adelante
		if(board[destiny.getY()][destiny.getX()] == NULL)
			return true;
		return false;
	}
	else if((diffY==1&&diffX==1)){
		if(board[destiny.getY()][destiny.getX()].getColor() != color) //comer en diagonal
			return true;
		return false;
	}
	else{
		return false;
	}
}
void Pawn::moveTo(Piece** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getY()][position.getX()] = NULL;
		position = destiny;
		board[position.getY()][position.getX()] = *this;
	}
	else{
		cout << "Invalid move" << endl;
	}
}
string Pawn::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "T";
	}
	else{
		ss << "t";
	}
	return ss.str();
}