#include <iostream>
#include <algorithm>

using namespace std;

int num[31][31];
void combi() 
{
    for (int i = 1; i < 30; i++) 
    {
        num[i][i] = 1;
        num[i][1] = i;
    }
    for (int i = 2; i < 30; i++)
        for (int j = 2; j < 30; j++)
            if (i > j)
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
}

int main()
{
    int t, m, n;  cin >> t;
    combi();
    for (int i = 0; i < t ; i++)
    {
        cin >> n >> m;
        cout << num[m][n] << "\n";
    }

    return 0;
}