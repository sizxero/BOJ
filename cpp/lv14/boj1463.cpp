#include <iostream>
#include <algorithm>
using namespace std;

int ans[1000001];
int main()
{
	int n;	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		ans[i] = ans[i - 1] + 1;
		if (i % 2 == 0)
			ans[i] = min(ans[i], ans[i/2] + 1);
		if (i % 3 == 0)
			ans[i] = min(ans[i], ans[i / 3] + 1);
	}
	cout << ans[n];
	return 0;
}