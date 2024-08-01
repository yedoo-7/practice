#include <iostream>
#include "Box.h"
using namespace std;
// 成员函数定义

int main()
{
  Box Box1;            // 声明 Box1，类型为 Box
  Box Box2;            // 声明 Box2，类型为 Box
  Box Box3;            // 声明 Box3，类型为 Box
  double volume = 0.0; // 用于存储体积

  // box 1 详述
  Box1.setLength(6);
  Box1.setBreadth(7);
  Box1.setHeight(5);

  // box 2 详述
  Box2.setLength(12);
  Box2.setBreadth(13);
  Box2.setHeight(10);

  cout << "2024年 08月 01日 星期四 16:51:35 CST" << endl;

  // box 1 的体积
  volume = Box1.getVolume();
  cout << "Box1 的体积：" << volume << endl;

  // box 2 的体积
  volume = Box2.getVolume();
  cout << "Box2 的体积：" << volume << endl;

  // 把两个对象相加，得到 Box3
  Box3 = Box1 + Box2;

  // Box3 的体积
  volume = Box3.getVolume();
  cout << "Box3 的体积：" << volume << endl;
  
  return 0;
}
