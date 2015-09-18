#pragma once
#include <string>
#include "position.hpp"

using namespace std;

class Piece{
 protected:
	char color;
	Position position;
 public:
 	Piece(char color = 'B', int x = 0, int y = 0);
	char getColor()const;
	Position getPosition()const;
	void setColor(char);
	void setPosition(Position);
	virtual bool moveTo(Piece*** board, Position destiny)=0;
	virtual bool isValidMove(Piece*** board, Position destiny)=0;
	virtual string toString()const;
};