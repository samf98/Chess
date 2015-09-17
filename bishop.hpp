#pragma once
#include "piece.h"
#include "position.h"

class Bishop: public Piece{
	public:
		Bishop(char,int,int);
		virtual bool isValidMove(Piece** board, Position destiny);
		virtual void moveTo(Piece** board, Position destiny);
		virtual string toString()const;

};