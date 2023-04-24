#include "movie.h"

Movie::Movie(string mv, int id): name(mv), movieId(id)
{
}

int Movie::getMovieId()
{
    return movieId;
}

void Movie::setname(std::string name)
{
    name = name;
}

string Movie::getname()
{
    return name;
}
void Movie::setlength(int len)
{
    length =  len;
}

int Movie::getlength()
{
    return length;
}