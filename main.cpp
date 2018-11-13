#include<iostream>
#include"box.h"
using namespace std;
int main()
{
  box b1;
  box b2(1,2,3);
  cout<<b1.get_area<<endl;
  cout<<b2.get_area()<<endl;
  return 0;
}
