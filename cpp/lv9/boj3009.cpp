#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	bool X1 = false, X2 = false, Y1 = false, Y2 = false;

	if (x1 != x2)
	{
		X1 = true; X2 = true;
	}
	else
		X1 = true;

	if (!X2)
		cout << x3;
	else
	{
		if (x1 == x3)
			cout << x2;
		else
			cout << x1;
	}

	cout << " ";

	if (y1 != y2)
	{
		Y1 = true; Y2 = true;
	}
	else
		Y1 = true;

	if (!Y2)
		cout << y3;
	else
	{
		if (y1 == y3)
			cout << y2;
		else
			cout << y1;
	}
	return 0;
}