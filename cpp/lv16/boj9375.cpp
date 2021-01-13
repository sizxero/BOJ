#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t;	cin >> t;
	int n;	string name, kind;

	for (int i = 0; i < t; i++)
	{
		map<string, int> m;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> name >> kind;
			if (m.find(kind) == m.end())
				m.insert({ kind, 1 });
			else
				m[kind]++;
		}

		int cnt = 1;
		for (auto i : m)
			cnt *= (i.second + 1);

		cout << --cnt << "\n";
	}
	return 0;
}
