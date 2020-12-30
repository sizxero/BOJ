#include <iostream>
#include <algorithm>
using namespace std;

struct Info
{
	int age;
	string name;
};

bool compare(Info i1, Info i2)
{
	return i1.age < i2.age;
}

int main()
{
	int n;		cin >> n;
	Info* infos = new Info[n];
	for (int i = 0; i < n; i++)
		cin >> infos[i].age >> infos[i].name;
	
	stable_sort(infos, infos + n, compare);

	for (int i = 0; i < n; i++)
		cout << infos[i].age << " " << infos[i].name << "\n";

	return 0;
}