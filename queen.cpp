#include "pieza.hpp" 
#include "ueen.hpp" 
#include <string> 
#include <iostream>
#include <stringstream>

using namespace std;

Queen::Queen(char color, int x, int y):Piece(color, x, y){
}
bool Queen::isValidMove(Piece** board, Position destiny){
	int contadorV,contadorH;
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
	}else if (((position.getX() != destiny.getX()) && (position.getY() == destiny.getY()))){//si se mueve horizontalmente
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
	}else if(this->position.getY()>destiny.getY() && this->position.getX()>destiny.getX()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la izquierda
			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV--;
			contadorH--;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'B' ){
					return false:
				}
				contadorV--;
				contadorH--;
			}
			return true;



				
		}else if(this->position.getY()>destiny.getY() && this->position.getX()<destiny.getX()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la derecha

			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV--;
			contadorH++;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'B' ){
					return false:
				}
				contadorV--;
				contadorH++;
			}
			return true;

		}else if(this->position.getY()<destiny.getY() && this->position.getX()>destiny.getX()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la izquierda
			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV++;
			contadorH--;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'B' ){
					return false:
				}
				contadorV--;
				contadorH--;
			}
			return true;

		}else if(this->position.getY()<destiny.getY() && this->position.getX()<destiny.getX()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la derecha
			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV++;
			contadorH++;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'B' ){
					return false:
				}
				contadorV++;
				contadorH++;
			}
			return true;

		}else if(this->position.getY()>destiny.getY() && this->position.getX()>destiny.getX()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la izquierda
			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV--;
			contadorH--;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'N' ){
					return false:
				}
				contadorV--;
				contadorH--;
			}
			return true;



				
		}else if(this->position.getY()>destiny.getY() && this->position.getX()<destiny.getX()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la derecha

			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV--;
			contadorH++;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'N' ){
					return false:
				}
				contadorV--;
				contadorH++;
			}
			return true;

		}else if(this->position.getY()<destiny.getY() && this->position.getX()>destiny.getX()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la izquierda
			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV++;
			contadorH--;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'N' ){
					return false:
				}
				contadorV--;
				contadorH--;
			}
			return true;

		}else if(this->position.getY()<destiny.getY() && this->position.getX()<destiny.getX()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la derecha
			contadorV = this->position.getY();
			contadorH = this->position.getX();
			contadorV++;
			contadorH++;

			while (contadorV != destiny.getY() && contadorH != destiny.getX() ){
				if ((contadorH>7 || contadorH<0) || (contadorV>7 || contadorV<0)){
					return false;
				}
				if (board[contador][contadorH].getColor() == 'N' ){
					return false:
				}
				contadorV++;
				contadorH++;
			}
			return true;

		}
}
void Queen::moveTo(Piece** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getY()][position.getX()] = NULL;
		position = destiny;
		board[position.getY()][position.getX()] = *this;
	}
	else{
		cout << "Invalid move" << endl;
	}
}
string Queen::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "T";
	}
	else{
		ss << "t";
	}
	return ss.str();
}