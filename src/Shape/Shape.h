#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
public:
  Shape(int a = 0, int b = 0)
  {
    width = a;
    height = b;
  }
  // int area()静态多态早绑定
  // virtual int area() // 虚函数动态链接，后期绑定
  // {
  //   std::cout << "Parent class area :" << std::endl;
  //   return 0;
  // }
  // pure virtual function,纯虚函数，想定义虚函数，但又不能对虚函数给出有意义的实现
  virtual int area() = 0;

protected:
  int width;
  int height;
};

// 基类 PaintCost
class PaintCost
{
public:
  int getCost(int area)
  {
    return area * 70;
  }
};

#endif // !SHAPE_H_