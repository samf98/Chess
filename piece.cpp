#include <string>
#include "position.hpp"
#include "piece.hpp"

using namespace std;

Piece::Piece(char color, int x, int y){
	this->color = color;
	this->position = Position(x,y);
}
char Piece::getColor()const{
	return color;
}
Position Piece::getPosition()const{
	return position;
}
void Piece::setColor(char color){
	this->color = color;
}
void Piece::setPosition(Position position){
	this->position = position;
}
string Piece::toString()const{
	string retval = "";
	return retval;
}