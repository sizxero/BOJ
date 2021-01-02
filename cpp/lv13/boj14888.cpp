#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, minResult = 987654321, maxResult = -987654321;
int digit[12];
int operators[4];


void findAnswer(int d, int idx)
{
    if (idx == n)
    {
        if (d > maxResult)
            maxResult = d;
        if (d < minResult)
            minResult = d;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (operators[i] > 0)
        {
            operators[i]--;
            if (i == 0)
                findAnswer(d + digit[idx], idx + 1);
            else if (i == 1)
                findAnswer(d - digit[idx], idx + 1);
            else if (i == 2)
                findAnswer(d * digit[idx], idx + 1);
            else
                findAnswer(d / digit[idx], idx + 1);
            operators[i]++;
        }
    }
    return;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> digit[i];
	for (int i = 0; i < 4; i++)
			cin >> operators[i];
	findAnswer(digit[0], 1);
	cout <<  maxResult << "\n" << minResult;
	return 0;
}