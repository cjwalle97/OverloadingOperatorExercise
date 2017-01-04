#include <iostream>
#include "PositionHeader.h"

Position::Position(float a, float b) {
	X = a;
	Y = b;
}

Position Position::operator+(Position other)
{
	return Position((X + other.X), (Y + other.Y));
}

Position Position::operator-(Position other)
{
	return Position((X - other.X), (Y - other.Y));
}

Position Position::operator+=(Position other)
{
	return Position((X += other.X), (Y += other.Y));
}

Position Position::operator-=(Position other)
{
	return Position((X -= other.X), (Y -= other.Y));
}

bool Position::operator==(Position other)
{
	if (X == other.X && Y == other.Y)
	{
		return true;
	}
}