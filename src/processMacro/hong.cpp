#include <iostream>
using namespace std;

// #define macro-name replacement-text
#define PI 3.14159
#define MIN(a, b) (a < b ? a : b)
#define DEBUG
#define MKSTR(x) #x       // # 运算符会把 replacement-text 令牌转换为用引号引起来的字符串
#define concat(a, b) a##b // ## 运算符用于连接两个令牌

int main()
{

  //$ gcc -E test.cpp > test.p 编译器仅执行预处理阶段
  cout << "Value of PI :" << PI << endl;
  int i, j;
  i = 100;
  j = 30;
  cout << MKSTR(HELLO C++) << endl;
#ifdef DEBUG
  cerr << "Trace: Inside main function" << endl;
#endif

#if 0
   /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif

  cout << "The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
  cerr << "Trace: Coming out of main function" << endl;
#endif
  int xy = 100;

  cout << concat(x, y) << endl;
  cout << "Value of __LINE__ : " << __LINE__ << endl;
  cout << "Value of __FILE__ : " << __FILE__ << endl;
  cout << "Value of __DATE__ : " << __DATE__ << endl;
  cout << "Value of __TIME__ : " << __TIME__ << endl;
  return 0;
}