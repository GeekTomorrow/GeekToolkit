#include "head.h"

using namespace std;

int main()
{
	int language,command,returnnum;
	string text;
	cout << "欢迎使用极客工具箱" << endl<<"1.网站加速"<<endl<<"2.版本管理"<<endl;
	cin >> command;
	if (command == 1)
	{
		cout<<"网站加速"<<endl<<"1.Github加速（自动化Github520）";
	}
	if (command == 2)
	{
		cout << "版本管理" << endl << "1.初始化仓库";
		cin >> command;
		if (command == 1)
		{
			init();
			cout << "输入数字以退出。";
		}
	}
	return 0;
}