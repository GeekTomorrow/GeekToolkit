#include "head.h"

using namespace std;

int main()
{
	int language,command;
	string text;

	cout << "Welcome to GitToolkit, please select your language" << endl<<"1.简体中文"<<endl<<"2.English"<<endl;
	cin >> language;
	command = welcome(language);

	if (command == 1)
	{
		cin >> text;
		init(text);
	}
	return 0;
}