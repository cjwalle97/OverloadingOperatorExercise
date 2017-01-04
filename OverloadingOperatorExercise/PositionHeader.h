#pragma once
#include <iostream>

class Position
{
private:
	float X;
	float Y;
public:
	Position() {};
	Position(float a, float b);
	Position operator+(Position other);
	Position operator-(Position other);
	Position operator+=(Position other);
	Position operator-=(Position other);
	bool operator==(Position other);
};