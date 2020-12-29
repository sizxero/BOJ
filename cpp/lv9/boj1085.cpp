#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int shortx, shorty;
	if (x < abs(x - w))
		shortx = x;
	else
		shortx = abs(x - w);
	if (y < abs(y - h))
		shorty = y;
	else
		shorty = abs(y - h);

	int shortest = (shortx < shorty) ? shortx : shorty;
	cout << shortest;
	return 0;
}