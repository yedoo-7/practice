#include <iostream>
#include <pthread.h>
//#include<thread>
// task.jason配置“-lpthread ” vscode调试
// 或者 $ g++ test.cpp -lpthread -o test.o
using namespace std;

#define NUM_THREADS 5

void *say_hello(void *args)
{
  cout << "Hello Runoob!" << endl;
  return 0;
}

int main()
{
  // 定义线程的 id 变量，多个变量使用数组
  pthread_t tids[NUM_THREADS];
  for (int i = 0; i < NUM_THREADS; i++)
  {
    // 参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
    int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
    if (ret != 0)
    {
      cout << "pthread_create error:error_code=" << ret << endl;
    }
  }
  pthread_exit(NULL);
}