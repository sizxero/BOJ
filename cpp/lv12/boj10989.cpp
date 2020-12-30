#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cntArr[10001] = {0};
	int n;	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int d;	cin >> d;
		cntArr[d]++;
	}

	for (int i = 0; i < 10001; i++)
		for (int j = 0; j < cntArr[i]; j++)
			cout << i << "\n";
	
	return 0;
}