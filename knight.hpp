#pragma once 
#include "piece.hpp"
#include "position.hpp"

class Knight: public Piece{
	char color;
	Position position;
	public:
		Knight(char color, int x , int y;):Piece(color, x, y);
		virtual bool isValidMove(Piece** board,Position origin, Position destiny);
		virtual void moveTo(Position origin, Position destiny);
		

};