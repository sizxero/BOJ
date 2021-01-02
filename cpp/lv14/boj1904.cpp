#include <iostream>
#include <vector>
using namespace std;

int n;
vector<long long> result = {0, 1, 2};

void tile()
{
	for (int i = 3; i <= n; i++)
		result.push_back((result[i - 1] + result[i - 2]) % 15746);
}
int main()
{
	cin >> n;
	tile();
	cout << result[n] % 15746;
	return 0;
}