#include <iostream>
#include <vector>
using namespace std;

int n, start, end;
int asc = 0, dec = 0, same = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> start >> end;
		if (start < end)
			asc++;
		else if (start > end)
			dec++;
		else
			same++;
	}
	cout << max(asc+same, dec+same);
	return 0;
}