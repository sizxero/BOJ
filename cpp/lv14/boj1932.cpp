#include <iostream>
#include <algorithm>
using namespace std;
int result[501][501];

int main() 
{
    int n;    cin >> n;
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j <= i; j++)
            cin >> result[i][j];

    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j <= i; j++)
            result[i][j] += max(result[i - 1][j - 1], result[i - 1][j]);

    int max = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (max < result[n][i])
            max = result[n][i];
    }

    cout << max;
    return 0;
}
