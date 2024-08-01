// 继承
#include <iostream>
#include "Shape.h"
using namespace std;

// 多继承
class Rectangle : public Shape, public PaintCost
{

public:
  Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
  int area()
  {
    cout << "Rectangle class area :" << endl;
    return (width * height);
  }
};

class Triangle : public Shape, public PaintCost
{
public:
  Triangle(int a = 0, int b = 0) : Shape(a, b) {}
  int area()
  {
    cout << "Triangle class area ："<< endl;
    return (width * height / 2);
  }
};

int main(void)
{
  Shape *shape1;
  Shape *shape2;
  Rectangle rec(10, 7);
  Triangle tri(10, 5);

  // 存储矩形的地址
  shape1 = &rec;
  // 调用矩形的求面积函数 area
  int cost1=shape1->area();

  // 存储三角形的地址
  shape2 = &tri;
  // 调用三角形的求面积函数 area
  int cost2=shape2->area();
  
  // 输出总花费
  cout << "Rec Total paint cost: $" << rec.getCost(cost1) << endl;
  cout << "Tri Total paint cost: $" << tri.getCost(cost2) << endl;

  cout << "2024年 08月 01日 星期四 17:28:11 CST" << endl;

  return 0;
}