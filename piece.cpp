#include <string>
#include "position.hpp"
#include "piece.hpp"

using namespace std;

Piece(char color, int x, int y){
	this->color = color;
	this->position(this->x, this->y);
}
char getColor()const{
	return color;
}
Position getPosition()const{
	return position;
}
void setColor(char color){
	this->color = color;
}
void setPostion(Position position){
	this->position = position;
}
virtual void moveTo(Position destiny){ //metodo debe definirse
	if(isValidMove){
		position = destiny;
	}
}
virtual bool isValidMove(Piece** board, Position destiny){//metodo debe definirse
	return true;
}
virtual string toString()const{
	string retval = "";
	return retval;
}