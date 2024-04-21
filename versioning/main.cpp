#include <iostream>
#include<string>

using namespace std;

int versioning_init()
{
	string git;
	cout << "正在初始化Git仓库。" << endl << "请输入仓库Git地址：";
	cin >> git;
	system("git init");
	string gitcommand = "git remote add github " + git;
	system(gitcommand.c_str());
	system("git branch -M main");
	cout << "初始化 Github仓库完成！";
	return 1;
}

int versioning_push()
{
	string git;
	cout << "正在逐步提交您的更新内容" << endl << "请输入您的提交日志（如已本地推送，请输入Exit）：";
	cin >> git;
	if (git == "Exit") {
		system("git push github main");
		cout << "提交完成！";
		return 1;
	}
	else
	{
		system("git add .");
		string gitcommand = "git commit -m " + git;
		system(gitcommand.c_str());
		system("git push github main");
		cout << "提交完成！";
		return 1;
	}
}