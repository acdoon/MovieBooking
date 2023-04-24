#ifndef SCREEN_H
#define SCREEN_H
#include<list>
#include "seat.h"
using namespace std;
class Screen{
  int screenid;
  list<Seat> seats;
  public:
   void setId(int);
   void setSeats(list<Seat>&);
   int getId();
   list<Seat> getSeats();
};

#endif