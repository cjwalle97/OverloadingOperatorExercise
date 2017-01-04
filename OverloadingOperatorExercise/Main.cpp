#include <iostream>
#include "PositionHeader.h"

int main()
{
	Position ball(0, 0);
	Position other(1, 1);
	Position positive = ball + other;
	Position negative = ball - other;
	ball += other;
	ball -= other;
	bool equivalent = ball.operator==(other);
}