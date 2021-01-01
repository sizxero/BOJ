#include <iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool visited[9] = { false, };

void n��m(int num)
{
	if (num == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[num] = i;
			visited[i] = false;
			n��m(num + 1);
		}
	}
}

int main()
{
	cin >> n >> m;
	n��m(0);
	return 0;
}