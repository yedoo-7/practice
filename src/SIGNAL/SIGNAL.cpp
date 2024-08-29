/*

VSCODE中 ctrl+c,出现异常会直接终止；
但在新终端，执行可执行文件，可以捕获信号

这可能是因为在Terminal中使用Ctrl+C键组合时，它被解释为中断当前正在运行的process（即SIGINT信号），而在VSCode中默认情况下会禁用这种行为。如果您需要在VSCode中使用Ctrl+C键来中断程序，则可以按以下步骤进行操作：

1. 打开VSCode的设置（通过快捷键Ctrl +，或通过菜单栏中的“文件”>“首选项”>“设置”）。

2. 在搜索框中输入“terminal.integrated.commandsToSkipShell”并点击“编辑settings.json”链接。

3. 将命令toSkip中的值更改为：

   "terminal.integrated.commandsToSkipShell": ["Ctrl+C"]

4. 保存并关闭文件。

现在，您应该能够使用Ctrl+C键组合来中断在Terminal中运行的程序。
*/
#include <iostream>
#include <csignal>
#include <unistd.h> //unix类系统定义符号常量

using namespace std;

void signalHandler(int signum)
{
  cout << "Interrupt signal (" << signum << ") received.\n";

  // 清理并关闭
  // 终止程序

  exit(signum);
}

int main()
{
  // raise() 生成信号
  int i = 0;
  // 注册信号 SIGINT 和信号处理程序
  signal(SIGINT, signalHandler);

  while (++i)
  {
    cout << "Going to sleep...." << endl;
    if (i == 3)
    {
      raise(SIGINT);
    }
    sleep(1);
  }

  return 0;
  // signal() 函数捕获 SIGINT 信号
  //  signal(SIGINT, signalHandler);

  // while (1)
  // {
  //   cout << "Going to sleep...." << endl;
  //   sleep(1);
  // }
  // return 0;
}