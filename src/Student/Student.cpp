#include <iostream>
using namespace std;

class Student
{
private:
  string name;
  int age;

public:
  // 构造函数
  Student(string studentname, int studentage)
  {
    name = studentname;
    age = studentage;
  }
  // 访问器函数
  string getName()
  {
    return name;
  }
  int getAge()
  {
    return age;
  }

  // 修改器函数
  void setName(string studentname)
  {
    name = studentname;
  }
  void setAge(int studentage)
  {
    if (studentage > 0)
    {
      age = studentage;
    }
    else
    {
      cout << "Invalid age!" << endl;
    }
  }
  void printInfo()
  {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
};

int main()
{
  Student student1("Alice", 20);
  student1.printInfo();

  student1.setName("Bob");
  student1.setAge(22);
  student1.printInfo();
  return 0;
}