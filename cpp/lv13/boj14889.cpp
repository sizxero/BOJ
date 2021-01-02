#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, minStat = 987654321;
int ability[20][20];
bool team[20];

void findMin(int idx, int person)
{
	vector<int> teamStart, teamLink;
	int startScr = 0, linkScr = 0;
	if (person == n / 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (team[i])
				teamStart.push_back(i);
			else
				teamLink.push_back(i);
		}
		

		for (int i = 0; i < n/2; i++)
		{
			for (int j = 0; j < n/2; j++)
			{
				startScr += ability[teamStart[i]][teamStart[j]];
				linkScr += ability[teamLink[i]][teamLink[j]];
			}
		}
		minStat = min(minStat, abs(startScr - linkScr));
		return;
	}

	for (int i = idx; i < n; i++)
	{
		if (!team[i])
		{
			team[i] = true;
			findMin(i, person+1);
			team[i] = false;
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> ability[i][j];
	}
	findMin(0, 0);
	cout << minStat;
	return 0;
}