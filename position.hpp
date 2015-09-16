#pragma once
#include <string>

using std::string;

class Position{
	private:
		int x; //row
		int y; //column
	public:
		Position(int = 0,int = 0);
		string toString()const;
		const Position& operator=(const Position&);
		const int getX()const;
		const int getY()const;
		int setX(int);
		int setY(int);
};
