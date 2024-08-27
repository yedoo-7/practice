#include <iostream>
using namespace std;

class Box
{
public:
  Box()
  {
    cout << "调用构造函数" << endl;
  }
  ~Box()
  {
    cout << "调用析构函数" << endl;
  }
};

int main()
{
  Box *myBoxArray = new Box[4];

  delete[] myBoxArray;
  //最先被调用的构造函数，其对应的析构函数最后被调用，而最后被调用的构造函数，其对应的析构函数最先被调用
  return 0;
}