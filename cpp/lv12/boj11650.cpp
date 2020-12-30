#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
	int x;
	int y;
};

bool compare(Point p1, Point p2)
{
	bool p2Big;
	if (p1.x == p2.x)
	{
		if (p1.y <= p2.y)
			p2Big = true;
		else
			p2Big = false;
	}
	else if (p1.x < p2.x)
		p2Big = true;
	else
		p2Big = false;

	return p2Big;
}
int main()
{
	int n, x, y;	cin >> n;
	Point* pArr = new Point[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		pArr[i].x = x;	pArr[i].y = y;
	}

	sort(pArr, pArr+n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << pArr[i].x << " " << pArr[i].y << "\n";
	}
	return 0;
}