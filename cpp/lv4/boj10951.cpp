#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b;
	while(true)
	{
		cin >> a >> b;
		if (!cin.eof())
			cout << a + b << "\n";
		else
			break;
	}
	return 0;
}