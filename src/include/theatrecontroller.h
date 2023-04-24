#ifndef  THEATRECONTROLLER_H
#define THEATRECONTROLLER_H

#include "theatre.h"
#include <string>
#include <list>
#include <map>
#include "show.h"

using namespace std;

class TheatreController {
  map<string,list<Theatre>> theatresInCity;
  list<Theatre> allTheatres;
  
  public:
  void addTheatre(Theatre&,string);
  map<int,list<Show>> getAllShows(Movie&,string);

};
#endif