//执行顺序不固定
#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_PTHREADS 5

void *printHello(void *threadid)
{
  int tid = *((int *)threadid);
  cout << "Hello Runoob! 线程 ID，" << tid << endl;
  pthread_exit(NULL);
}

int main()
{
  pthread_t threads[NUM_PTHREADS];
  int indexes[NUM_PTHREADS];
  int rc;
  int i;
  for (i = 0; i < NUM_PTHREADS; i++)
  {
    cout << "main() : 创建线程，" << i << endl;
    indexes[i] = i;
    rc = pthread_create(&threads[i], NULL, printHello, (void *)&(indexes[i]));//pthread_create创建成功返回0，创建失败返回线程编号
    if (rc != 0)
    {
      cout << "Error:无法创建线程，" << rc << endl;
      exit(-1);
    }
  }
  pthread_exit(NULL);
}