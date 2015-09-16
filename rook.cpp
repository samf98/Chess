#include "pieza.hpp" 
#include "rook.hpp" 
#include <string> 
#include <iostream>

using namespace std;

Rook::Rook(char color, int x, int y):Pieza(color, x, y){
}
bool Rook::isValidMove(Piece** board, Position destiny){
	if (((posicion.getX() == destiny.getX()) && (posicion.getY() != destiny.getY()))){ //si se mueve verticalmente
		if(posicion.getY() < destiny.getY()){ //si se mueve hacia abajo
			for (int row = posicion.getY()+1; row < destiny.getY(); ++row){
				if (board[row][posicion.getX()] != NULL){//si se encuentra una pieza entre origin y destiny
					return false;
				}
			}
			if (board[destiny.getY()][posicion.getX()] == NULL || board[destiny.getY()][posicion.getX()].getColor() != color){
				//si destiny est vacio o tiene una pieza enemiga
				return true;
			}
			else {
				return false;
			}
		}
		else if(posicion.getY() > destiny.getY()){//si se mueve hacia arriba
			for (int row = posicion.getY()-1; row > destiny.getY(); --row){
				if (board[row][posicion.getX()] != NULL){
					return false;
				}
			}
			if (board[destiny.getY()][posicion.getX()] == NULL || board[destiny.getY()][posicion.getX()].getColor() != color){
				//SI DESTINY ESTA VACIO O TIENE UNA PIEZA ENEMIGA
				return true;
			}
			else {
				return false;
			}
		}
	}
	else if (((posicion.getX() != destiny.getX()) && (posicion.getY() == destiny.getY()))){//si se mueve horizontalmente
		if(posicion.getX() < destiny.getX()){ //si se mueve hacia la derecha
			for (int cols = posicion.getX()+1; cols < destiny.getX(); ++cols){
				if (board[posicion.getY()][cols] != NULL){//si se encuentra una pieza entre origin y destiny
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
		else if(posicion.getX() > destiny.getX()){ //si se mueve hacia la izquierda
			for (int cols = posicion.getX()-1; cols > destiny.getX(); --cols){
				if (board[posicion.getY()][cols] != NULL){//si se encuentra una pieza entre origin y destiny
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
		this->posicion = destiny;
	}
	else{
		cout << "Invalid move" << endl;
	}
}