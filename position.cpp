# include "position.h"
# include <sstream>
# include <string>

using namespace std;

Position::Position(int x,int y){
	if((x>=0&&x<=7) && (y>=0&&y<=7)){ //validacion out of bounds
		this->x = x;
		this->y = y;
	}
}
string toString()const;{
	stringstream str;
	str << "("<<x<<","<<y<<")";
}
const Position& Position::operator=(const Position&pos){ //sobrecarga de operador de asignacion
	this->x = pos.getX();
	this->y = pos.getY();
}
const int getX()const{
	return x;
}
const int getY()const{
	return y;
}
int	setX(int x){
	this->x=x;
}
int setY(int y){
	this->y=y;
}