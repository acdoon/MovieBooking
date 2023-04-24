#ifndef THEATRE_H
#define THEATRE_H
#include<string>
#include"screen.h"
#include "show.h"

using namespace std;
class Theatre{
   int theatre_id;
   string name;
   string address;
   list<Show> shows;
   list<Screen> screens;

   public:
   Theatre(int,string);
   void setName(string);
   string getName();
   int getId();
   void  setAddress(string);
   string getAddress();
   void setShows(list<Show>&);
   list<Show> getShows();
   void setScreens(list<Screen>&);
   list<Screen>getScreens();

};

#endif