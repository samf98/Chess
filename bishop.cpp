#include "bishop.hpp"
#include "piece.hpp"
#include "position.hpp"
#include <cmath>
#include <sstream>
using std::stringstream;


Bishop::Bishop(char color,int X,int Y):Piece(color,X,Y){
	//Se llama al constructor de la clase Piece
}
bool Bishop::isValidMove(Piece**board, Position destiny){

	int contadorV,contadorH;

	if ((this->position.getX()== destiny.getX()) || (this->position.getY()== destiny.getY())){
		//verifica que no se mueva a los lados ni verticalmente
		return false;
	
	}

	if (this->color == 'B'){
		

		if(this->position.getY()>destiny.getY() && this->position.getX()>destiny.getX()){
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

		}

		


	}else{

		if(this->position.getY()>destiny.getY() && this->position.getX()>destiny.getX()){
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

}

void Bishop::moveTo(Piece** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getX()][position.getY()] = NULL;
		position = destiny;
		board[position.getX()][position.getY()] = *this;
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


