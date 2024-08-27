#include <iostream>
using namespace std;

int main()
{
  int ***p;
  int i, j, k;
  p = new int **[2];
  for (i = 0; i < 2; i++)
  {
    p[i] = new int *[3];
    for (j = 0; j < 3; j++)
    {
      p[i][j] = new int[4];
      for (k = 0; k < 4; k++)
      {
        p[i][j][k] = i + j + k;
      }
    }
  }

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      for (k = 0; k < 4; k++)
      {
        cout << p[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  // 释放内存
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      delete[] p[i][j];
    }
  }
  for (i = 0; i < 2; i++)
  {
    delete[] p[i];
  }
  delete[] p;

  return 0;
}