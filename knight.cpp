#include <string>
#include "knight.hpp"

Knight(char color, int x , int y;):Piece(color, x, y);
		virtual bool isValidMove(Piece** board,Position origin, Position destiny);
		virtual void moveTo(Position origin, Position destiny);
		~Knight();