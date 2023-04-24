#include "theatrecontroller.h"

void TheatreController::addTheatre(Theatre & theatre, string city)
{
   allTheatres.push_back(theatre);
  map<string,list<Theatre>>::iterator itr =  theatresInCity.find(city);
  if(itr != theatresInCity.end()){
     list<Theatre>& thr =  itr->second;
     thr.push_back(theatre);
  }
  else{
      list<Theatre> thr; 
      thr.push_back(theatre);
      theatresInCity[city] = thr ;
     //theatresInCity.insert(make_pair(city,list<Theatre>().push_back(theatre)));
  }
}

map<int, list<Show>> TheatreController::getAllShows(Movie& movie, string city)
{
   map<int, list<Show>> ret ;
   list<Theatre> theatres  =  theatresInCity.find(city)->second;

   for( Theatre th :  theatres)
   {
      list<Show> movieShows;
      list<Show> shows =  th.getShows();
      for( Show show: shows)
      {
           if( show.getMovie().getMovieId() == movie.getMovieId())
               movieShows.push_back(show);
      }

      if( !movieShows.empty())
      {
         ret.insert(make_pair(th.getId(), movieShows));
      }
   }
    return ret;
  
}
