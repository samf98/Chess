#pragma once
#include <string>
#include "position.hpp"

using namespace std;

class Piece{
 protected:
	char color;
	Position position;
 public:
 	Piece(char color, int x, int y);
	char getColor()const;
	Position getPosition()const;
	void setColor();
	void setPostion();
	virtual void moveTo(Position destiny);
	virtual bool isValidMove(Piece** board, Position destiny);
	virtual string toString()const;
};