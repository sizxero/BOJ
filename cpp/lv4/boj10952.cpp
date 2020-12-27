#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b;
	do 
	{
		cin >> a >> b;
		if(!(a == 0 && b == 0))
			cout << a + b << "\n";
	} while (!(a == 0 && b == 0));
	return 0;
}