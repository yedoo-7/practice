#include <iostream>

using namespace std;

class Box 
{
  public:
    double length;
    double breadth;
    double height;

    double get(void);
    void set(double len,double bre,double hei);
};

double Box::get(void)
{
  return length *breadth*height;
}
void Box::set(double len,double bre,double hei)
{
  length=len;
  breadth=bre;
  height=hei;
}

int main()
{
  Box Box1;
  Box Box2;
  Box Box3;
  double volume=0;

  Box1.height=5;
  Box1.length=6;
  Box1.breadth=7;

  Box2.height=10;
  Box2.length=12;
  Box2.breadth=13;

  volume=Box1.height*Box1.length;
  cout << "Box1 的体积：" << volume <<endl;

  volume=Box2.height*Box2.length;
  cout << "Box2 的体积：" << volume <<endl;

  Box3.set(16.0, 8.0, 12.0); 
  volume = Box3.get(); 
  cout << "Box3 的体积：" << volume <<endl;
  return 0;
}