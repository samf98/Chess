#include "pieza.hpp" 
#include "rook.hpp" 
#include <string> 
#include <iostream>
#include <stringstream>

using namespace std;

Rook::Rook(char color, int x, int y):Piece(color, x, y){
}
bool Rook::isValidMove(Piece** board, Position destiny){
	if (((position.getX() == destiny.getX()) && (position.getY() != destiny.getY()))){ //si se mueve verticalmente
		if(position.getY() < destiny.getY()){ //si se mueve hacia abajo
			for (int row = position.getY()+1; row < destiny.getY(); ++row){
				if (board[row][position.getX()] != NULL){//si se encuentra una pieza entre origin y destiny
					return false;
				}
			}
			if (board[destiny.getY()][position.getX()] == NULL || board[destiny.getY()][position.getX()].getColor() != color){
				//si destiny est vacio o tiene una pieza enemiga
				return true;
			}
			else {
				return false;
			}
		}
		else if(position.getY() > destiny.getY()){//si se mueve hacia arriba
			for (int row = position.getY()-1; row > destiny.getY(); --row){
				if (board[row][position.getX()] != NULL){
					return false;
				}
			}
			if (board[destiny.getY()][position.getX()] == NULL || board[destiny.getY()][position.getX()].getColor() != color){
				//SI DESTINY ESTA VACIO O TIENE UNA PIEZA ENEMIGA
				return true;
			}
			else {
				return false;
			}
		}
	}
	else if (((position.getX() != destiny.getX()) && (position.getY() == destiny.getY()))){//si se mueve horizontalmente
		if(position.getX() < destiny.getX()){ //si se mueve hacia la derecha
			for (int cols = position.getX()+1; cols < destiny.getX(); ++cols){
				if (board[position.getY()][cols] != NULL){//si se encuentra una pieza entre origin y destiny
					return false;
				}
			}
			if (board[destiny.getY()][destiny.getX()] == NULL || board[destiny.getY()][destiny.getX()].getColor() != color){
				//si destiny est vacio o tiene una pieza enemiga
				return true;
			}
			else {
				return false;
			}
		}
		else if(position.getX() > destiny.getX()){ //si se mueve hacia la izquierda
			for (int cols = position.getX()-1; cols > destiny.getX(); --cols){
				if (board[position.getY()][cols] != NULL){//si se encuentra una pieza entre origin y destiny
					return false;
				}
			}
			if (board[destiny.getY()][destiny.getX()] == NULL || board[destiny.getY()][destiny.getX()].getColor() != color){
				//si destiny est vacio o tiene una pieza enemiga
				return true;
			}
			else {
				return false;
			}
		}
	}
}
void Rook::moveTo(Piece** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getY()][position.getX()] = NULL;
		position = destiny;
		board[position.getY()][position.getX()] = *this;
	}
	else{
		cout << "Invalid move" << endl;
	}
}
string Rook::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "T";
	}
	else{
		ss << "t";
	}
	return ss.str();
}