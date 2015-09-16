#pragma once
#include <string>
#include "position.hpp"

class Piece{
	char color;
	Position position;
 public:
 	Piece(char color, int x, int y);
	char getColor()const;
	Position getPosition()const;
	void setColor();
	void setPostion();
	virtual void moveTo(Position origin, Position destiny);
	virtual bool isValidMove(Piece** board, Position origin, Position destiny);
};