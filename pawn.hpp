#pragma once

#include "piece.hpp"
#include "position.hpp"
#include <string>

using std::string;

class Pawn: public Piece{
	bool firstMove;
  public: 
	Pawn(char color, int x, int y);//constructor
	void setFirstMove(bool);
	virtual bool isValidMove(Piece*** board, Position destiny);
	virtual bool moveTo(Piece*** board, Position destiny);
	virtual string toString()const;
};