#include <iostream>
#include <algorithm>

using namespace std;

int num[1001][1001];
void combi()
{
    for (int i = 1; i < 1001; i++)
    {
        num[i][i] = 1;
        num[i][1] = i;
    }
    for (int i = 2; i < 1001; i++)
        for (int j = 2; j < 1001; j++)
            if (i > j)
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j] % 10007;
}

int main()
{
    int m, n;  cin >> m >> n;;
    combi();
    cout << num[m][n] % 10007;
    return 0;
}