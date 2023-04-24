#ifndef MOVIE_H
#define MOVIE_H
#include<string>

using namespace std;
class Movie{

    int movieId;
    std::string name;
    int length;
    std::string language;

    public:
     Movie(string,int);
     int getMovieId();
     void setname(std::string );
     string getname();
     void setlength(int);
     int getlength();

};
#endif