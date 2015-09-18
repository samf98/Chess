#pragma once
#include "piece.hpp"
#include "position.hpp"

class Bishop: public Piece{
	public:
		Bishop(char,int,int);
		virtual bool isValidMove(Piece*** board, Position destiny);
		virtual bool moveTo(Piece*** board, Position destiny);
		virtual string toString()const;

};