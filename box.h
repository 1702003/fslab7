#ifndef BOX_H
#define BOX_H
#include<iostream>
using namespace std;
class box
{
private:
  int length;
  int width;
  int height;
public:
  box();
  box(int l,int w,int h);
  int get_length();
  int get_width();
  int get_height();
  int get_area();
};
#endif
