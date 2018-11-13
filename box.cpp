#include<iostream>
#include"box.h"

box::box()
  {
    length=0;
    width=0;
    height=0;
  }
box::box(int l,int w,int h)
  {
    length=l;
    width=w;
    height=h;
  }
int box::get_length()
  {
    return length;
  }
int box::get_width()
  {
    return width;
  }
int box::get_height()
  {
    return height;
  }
int box::get_area()
  {
    return length*width*height;
  }
