//函数重载
#include <iostream>
using namespace std;

class printData
{
public:
  void print(int i)
  {
    cout << "整数为：" << i << '\n';
  }

  void print(double f)
  {
    cout << "浮点数为：" << f << endl;
  }
  void print(char c[])
  {
    cout << "字符串为：" << c << endl;
  }
};

int main()
{
  printData pd;

  cout << "2024年 08月 01日 星期四 15:43:59 CST" << endl;

  // 输出整数
  pd.print(5);
  // 浮点数
  pd.print(500.263);
  // 字符串
  char c[] = "wsnd";
  pd.print(c);

  return 0;
}