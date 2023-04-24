#include "screen.h"

void Screen::setId(int id)
{
     screenid = id;
}

void Screen::setSeats(list<Seat> & _seats)
{
    seats = _seats;
}

int Screen::getId()
{
    return screenid;
}

list<Seat> Screen::getSeats()
{
    return seats;
}
