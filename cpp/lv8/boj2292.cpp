#include <iostream>
using namespace std;

int main()
{
	int n, room = 0; cin >> n;
	for (int sum = 2; sum <= n; room++)
		sum += 6 * room;
	if (n == 1)	room = 1;
	cout << room;
	return 0;
}