#include <iostream>
#include<string>
#include <io.h>
using namespace std;

int main()
{
	int math[] = {0,1,4,5,7,8,10,12,15,17,30,41};
	for (auto number : math)
		cout << number << " ";
	const string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
	cout << "Vvedite imya\n";
	string searname;
	cin >> searname;
	int i = 0;
	bool a = 1;
	for (const auto& name : names)
	{
		if (searname == names[i])
		{
			cout << "Imya najdeno";
			a = 0;
		}
		i++;
	}
	if (a)
		cout << "Imya ne najdeno";
	return 0;
}