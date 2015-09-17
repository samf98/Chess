#pragma once 
#include "piece.hpp"
#include "position.hpp"

class King: public Piece{
	char color;
	Position position;
	public:
		King(char color, int x , int y);
		virtual bool isValidMove(Piece** board, Position destiny);
		virtual void moveTo(Piece** board, Position destiny);
		virtual string toString()const;

};