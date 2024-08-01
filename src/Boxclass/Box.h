#ifndef BOX_H
#define BOX_H
#include <iostream>

class Box
{
public:
  double getVolume()
  {
    return length * breadth * height;
  }
  void setLength(double len)
  {
    length = len;
  }
  void setBreadth(double bre)
  {
    breadth = bre;
  }
  void setHeight(double hei)
  {
    height = hei;
  }
  // 重载 + 运算符，把两个Boxg对象相加
  Box operator+(const Box &b)
  {
    // this指针指向的是调用成员函数（operator+）的当前对象
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
  }

private:
  double length;
  double breadth;
  double height;
  // 成员函数声明
  double get(void);
  void set(double len, double bre, double hei);
};

#endif // !BOX_H
