#include <iostream>
#include <string>
using namespace std;

bool is666(int n)
{
	string numStr = to_string(n);
	return numStr.find("666") != string::npos;
}

int main()
{
	int n;	cin >> n;
	int cnt = 1, result = 666;
	for (int i = 667; cnt < n; i++)
		if (is666(i))
		{
			cnt++;
			result = i;
		}
	cout << result;
	return 0;
}