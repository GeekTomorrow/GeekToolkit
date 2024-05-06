#include <iostream>
#include<string>

using namespace std;

int welcome(int command)
{
	if (command == 1)
	{
		std::cout << "欢迎使用GitToolkit" << endl;
	}
	return 1;
}

int init(string command)
{
	if ((command.compare("gITHUB")) == 0)
	{
		std::cout << "GitToolkit遇到问题，我们需要重启！" << endl << "请将此错误代码反馈给支持：程序未开发完成！";
	}
	return 0;
}