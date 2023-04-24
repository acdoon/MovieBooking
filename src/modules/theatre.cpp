#include "theatre.h"

Theatre::Theatre(int id, string name):theatre_id(id), name(name)
{
}

void Theatre::setName(string _name)
{
    name = _name;
}

string Theatre::getName()
{
    return name;
}

int Theatre::getId()
{
    return theatre_id;
}

void Theatre::setAddress(string _addr)
{
    address =  _addr;
}

string Theatre::getAddress()
{
    return address;
}

void Theatre::setShows(list<Show>& _shows)
{
   shows =  _shows;
}

list<Show> Theatre::getShows()
{
   return shows;
}

void Theatre::setScreens(list<Screen>& _screens)
{
    screens = _screens;
}

list<Screen> Theatre::getScreens()
{
    return screens;
}
