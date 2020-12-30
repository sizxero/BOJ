#include <iostream>
using namespace std;

struct Body
{
	int weight;
	int height;
};

int main()
{
	int n;	cin >> n;
	Body* bodys = new Body[n];
	for (int i = 0; i < n; i++)
	{
		int x, y;	cin >> x >> y;
		bodys[i].weight = x;
		bodys[i].height = y;
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 0; j < n; j++)
		{
			if (bodys[i].weight < bodys[j].weight
				&& bodys[i].height < bodys[j].height)
				cnt++;
		}
		cout << cnt << " ";
	}
	return 0;
}