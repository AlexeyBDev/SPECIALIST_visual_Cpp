#include "Line.h"

void Line::SetS(int sx, int sy)
{
	s_.SetX(sx);
	s_.SetY(sy);
}

void Line::SetE(int sx, int sy)
{
	e_.SetX(sx);
	e_.SetY(sy);
}
