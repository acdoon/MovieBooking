#include "show.h"

void Show::setShowId(int id)
{
    showId = id;
}

void Show::setMovie(Movie& mv) 
{
    movie =  mv;
}

void Show::setScreen(Screen& sc)
{
    screen = sc;
}

void Show::setBookedSeatIds(list<int>& booked)
{
   bookedSeats =  booked;
}

list<int> Show::getBookedSeatIds()
{
    return bookedSeats;
}

Screen Show::getScreen()
{
    return screen;
}

Movie Show::getMovie()
{
    return movie;
}

int Show::getShowId()
{
    return showId;
}

void Show::setShowStartTime(int tm)
{
    showtime =  tm;
}

int Show::getShowStartTime()
{
    return showtime;
}