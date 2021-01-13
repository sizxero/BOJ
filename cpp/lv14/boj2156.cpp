#include <iostream>
#include <algorithm>
using namespace std;

int n;
int wine[10001], dp[10001];
void fillWine()
{
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];
	dp[3] = max(max(wine[1] + wine[2], wine[1] + wine[3]), wine[2] + wine[3]);

	
	for (int i = 4; i <= n; i++)
		dp[i] = max(max(dp[i - 1], dp[i - 2] + wine[i]), dp[i - 3] + wine[i - 1] + wine[i]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> wine[i];

	fillWine();
	cout << dp[n] << "\n";

	return 0;
}