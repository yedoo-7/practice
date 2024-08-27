#include <iostream>
using std::cout;
using std::endl;

// 第一个命名空间
namespace first_space
{
  void func()
  {
    cout << "Inside first_space" << endl;
  }
  // 第二个命名空间
  namespace second_space
  {
    int b = 100;
    void func()
    {
      cout << "Inside second_space" << endl;
    }
  }
}

using namespace first_space::second_space;
int main()
{
  cout << "2024年8月27日14:31:20" << endl;
  // 调用第二个命名空间中的函数
  func();
  cout << first_space::second_space::b << endl;
  return 0;
}