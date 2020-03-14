#include "Mark.h"
#include "exceptions.h"

Mark::Mark(int _v, float _dist)
{
	if (_v < 0 || _dist < 0)
		throw Exception("Incorrect data!");

	vert = _v;
	dist = _dist;
};

Mark::Mark(const Mark& _copy)
{
	vert = _copy.vert;
	dist = _copy.dist;
};
//-------------------------------------------------

const Mark& Mark::operator=(const Mark& _m)
{
	if (this == &_m)
		return *this;
	
	dist = _m.dist;
	vert = _m.vert;

	return *this;
};

bool Mark::operator>(const Mark& _m) const
{
	return(dist > _m.dist);
};

bool Mark::operator>=(const Mark& _m) const
{
	return(dist >= _m.dist);
};

bool Mark::operator<(const Mark& _m) const
{
	return(dist < _m.dist);
};

bool Mark::operator<=(const Mark& _m) const
{
	return(dist <= _m.dist);
};