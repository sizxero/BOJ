#include <iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool visited[9] = { false, };

void n¤Ðm(int num, int idx)
{
	if (num == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = idx; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[num] = i;
			visited[i] = false;
			n¤Ðm(num + 1, i);
		}
	}
}

int main()
{
	cin >> n >> m;
	n¤Ðm(0, 1);
	return 0;
}