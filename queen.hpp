#pragma once
#include "rook.hpp"
#include "piece.hpp"
#include "bishop.hpp"
#include "position.hpp"
#include <string>

using std::string;

class Queen: public Piece{
  public: 
	Queen(char color, int x, int y);//constructor
	virtual bool isValidMove(Piece*** board, Position destiny);
	virtual void moveTo(Piece*** board, Position destiny);
	virtual string toString()const;
};