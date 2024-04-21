#include <iostream>
#include<string>

using namespace std;

int network_github()
{
	string git;
	cout << "正在初始化 Github仓库。" << endl << "请输入仓库Git地址：";
	cin >> git;
	system("git init");
	string gitcommand = "git remote add github " + git;
	system(gitcommand.c_str());
	system("git branch -M main");
	cout << "初始化 Github仓库完成！";
	return 1;
}