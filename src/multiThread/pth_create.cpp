#include <iostream>
#include <pthread.h>

using namespace std;

void *thread_start(void *arg)
{
  int arg_data = *((int *)arg);
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 50000; j++)
      ;
    cout << "Receive arg " << arg_data << " = " << arg_data << endl;
  }
}

int main()
{
  pthread_t tid;
  int arg1 = 1;
  int arg2 = 2;
  int ret = pthread_create(&tid, NULL, thread_start, (void *)&arg1);
  if (ret != 0)
  {
    perror("pthread_create");
    exit(EXIT_FAILURE);
  }
  thread_start((void *)&arg2);
  return 0;
}