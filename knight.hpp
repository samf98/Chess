#pragma once 
#include "piece.hpp"
#include "position.hpp"

class Knight: public Piece{
	public:
		Knight(char color, int x , int y);
		virtual bool isValidMove(Piece*** board,Position destiny);
		virtual void moveTo(Piece*** board, Position destiny);
		virtual string toString()const;

};