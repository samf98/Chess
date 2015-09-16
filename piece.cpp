#include <string>
#include "position.hpp"
#include "piece.hpp"

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