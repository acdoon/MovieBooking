#ifndef SEAT_H
#define SEAT_H

enum rowtype{
    left,
    middle,
    right
};

enum category{
    economy,
    premium
};
class Seat{
    int id;
    int row;
    rowtype type;
    category cat;
  public:
    void setSeat(int, int,rowtype&,category& );
    int getid();
    int getrow();
    rowtype getRowType();
    category getCategory();
};
#endif