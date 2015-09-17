#include <string>
#include "knight.hpp"
#include "pieza.hpp" 

Knight::Knight(char color, int x , int y;):Piece(color, x, y){
}//constructor
virtual bool Knight::isValidMove(Piece** board, Position destiny){
	if (position.getX()+2 == destiny.getX() && position.getY()+1 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x+2, y+1
		return true;
	else if(position.getX()+2 == destiny.getX() && position.getY()-1 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x+2, y-1
		return true;
	else if(position.getX()-2 == destiny.getX() && position.getY()+1 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x-2, y+1
		return true;
	else if(position.getX()-2 == destiny.getX() && position.getY()-1 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x-2, y-1
		return true;
	else if(position.getX()+1 == destiny.getX() && position.getY()+2 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x+1 y+2
		return true;
	else if(position.getX()-1 == destiny.getX() && position.getY()+2 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x-1, y+2
		return true;
	else if(position.getX()+1 == destiny.getX() && position.getY()-2 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x+1 y-2
		return true;
	else if(position.getX()-1 == destiny.getX() && position.getY()-2 == destiny.getY() && (board[destiny.getY()][destiny/getX()] == NULL|| board[destiny.getY()][destiny.getX()].getColor() != color))//x-1, y-2
		return true;
	else
		return false;
}//si el moviemiento es valido
virtual void Knight::moveTo(Piece** board, Position destiny){
	if (isValidMove(board, destiny))
		this -> Position = destiny;
	else
		cout << "Invalid move" << endl;
}//se mueve
