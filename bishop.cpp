#include "bishop.h"
#include "piece.h"
#include "position.h"
#include <cmath>
#include <sstream>
using std::stringstream;


Bishop::Bishop(char color,int X,int Y):Piece(color,X,Y){
	//Se llama al constructor de la clase Piece
}
bool Bishop::isValidMove(Piece**board, Position destiny){

	int contadorV,contadorH;

	if ((this->position.getY()== destiny.getY()) || (this->position.getX()== destiny.getX())){
		//verifica que no se mueva a los lados ni verticalmente
		return false;
	
	}

	if (this->color == 'B'){
		

		if(this->position.getX()>destiny.getX() && this->position.getY()>destiny.getY()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la izquierda
			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV--;
			contadorH--;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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



				
		}else if(this->position.getX()>destiny.getX() && this->position.getY()<destiny.getY()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la derecha

			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV--;
			contadorH++;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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

		}else if(this->position.getX()<destiny.getX() && this->position.getY()>destiny.getY()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la izquierda
			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV++;
			contadorH--;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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

		}else if(this->position.getX()<destiny.getX() && this->position.getY()<destiny.getY()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la derecha
			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV++;
			contadorH++;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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

		}

		


	}else{

		if(this->position.getX()>destiny.getX() && this->position.getY()>destiny.getY()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la izquierda
			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV--;
			contadorH--;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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



				
		}else if(this->position.getX()>destiny.getX() && this->position.getY()<destiny.getY()){
			//Si la pieza esta en la parte inferior y movimiento diagonal a la derecha

			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV--;
			contadorH++;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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

		}else if(this->position.getX()<destiny.getX() && this->position.getY()>destiny.getY()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la izquierda
			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV++;
			contadorH--;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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

		}else if(this->position.getX()<destiny.getX() && this->position.getY()<destiny.getY()){
			//Si la pieza esta en la parte superior y movimiento diagonal a la derecha
			contadorV = this->position.getX();
			contadorH = this->position.getY();
			contadorV++;
			contadorH++;

			while (contadorV != destiny.getX() && contadorH != destiny.getY() ){
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




	/*
	if(this->color=='b'){
		//Si es movimiento de las piezas blancas

		if(this->position().getY()< destiny.getY()){
			//Movimiento a la derecha
			for (int i = position.getX(); i <destiny.getX(); ++i){
				for (int j = position.getY(); j <destiny.getY(); ++j){
					if(board[i][j].getPiece().getColor()!=NULL && board[i][j].getPiece().getColor()=='b'){
						return false;
					}
				}
			}
				return true;
		}else{
			//movimiento a la izquierda
			for (int i = position.getX(); i <destiny.getX(); ++i){
				for (int j = position.getY(); j >destiny.getY(); --j){
					if(board[i][j].getPiece().getColor()!=NULL && board[i][j].getPiece().getColor()=='b'){
						return false;
					}
				}
			}
			return true;
		}

	}else{

		if(this->position().getY() < destiny.getY()){
			//Movimiento a la derecha
			for (int i = position.getX(); i <destiny.getX(); ++i){
				for (int j = position.getY(); j <destiny.getY(); ++j){
					if(board[i][j].getPiece().getColor()!=NULL && board[i][j].getPiece().getColor()=='n'){
						return false;
					}
				}
			}
				return true;
		}else{
			//movimiento a la izquierda
			for (int i = position.getX(); i <destiny.getX(); ++i){
				for (int j = position.getY(); j >destiny.getY(); --j){
					if(board[i][j].getPiece().getColor()!=NULL && board[i][j].getPiece().getColor()=='n'){
						return false;
					}
				}
			}
			return true;
		}
	}
	*/

}
/*void Bishop::moveTo(Piece** Board, Position destiny){
	bool condition = *this->isValidMove(Board,destiny);

	if (condition){
		Board[destiny.getX()][destiny.getY()] = this;
		Board[this->position.getX()][this->position.getY()] = NULL;
		this->position.setX(destiny.getX());
		this->position.setY(destiny.getY());
	}else{
		throw "Not a valid move";
	}
}*/
void Bishop::moveTo(Piece** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getY()][position.getX()] = NULL;
		position = destiny;
		board[position.getY()][position.getX()] = *this;
	}
	else{
		cout << "Invalid move" << endl;
	}
}

string Bishop::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "A";
	}
	else{
		ss << "a";
	}
	return ss.str();
}
}

