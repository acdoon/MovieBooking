#ifndef SHOW_H
#define SHOW_H
#include "movie.h"
#include "seat.h"
#include "screen.h"
#include "list"
using namespace std;

class Show{
int showId;
Movie movie;
Screen screen;
list<int> bookedSeats;
int showtime;
public:

void setShowId(int);
void setMovie(Movie&);
void setScreen(Screen&);
void setBookedSeatIds(list<int>&);
void setShowStartTime(int);
list<int> getBookedSeatIds();
Screen getScreen();
Movie getMovie();
int getShowId();
int getShowStartTime();

};
#endif