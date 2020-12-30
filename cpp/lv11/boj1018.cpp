#include <iostream>
using namespace std;

int n, m;
string blackFirst[8] =
{
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"}
};

string whiteFirst[8] =
{
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"}
};

char chess[50][50];

int blackCheck(int n, int m)
{
	int cnt = 0;
	for(int i = n; i < n+8; i++)
		for(int j = m; j < m + 8; j++)
			if(chess[i][j] != blackFirst[i-n][j-m])
				cnt++;
	return cnt;
}

int whiteCheck(int n, int m)
{
	int cnt = 0;
	for (int i = n; i < n + 8; i++)
		for (int j = m; j < m + 8; j++)
			if (chess[i][j] != whiteFirst[i - n][j - m])
				cnt++;
	return cnt;
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> chess[i][j];

	int result = 9999999;

	for (int i = 0; i + 7 < n; i++)
		for (int j = 0; j + 7 < m; j++)
			result = min(result, min(whiteCheck(i, j), blackCheck(i, j)));

	cout << result << endl;
	return 0;
}