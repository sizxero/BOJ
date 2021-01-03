#include <iostream>
using namespace std;

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main()
{
    int t;  cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;   cin >> a >> b;
        if (gcd(a, b) == 1)
            cout << a * b << "\n";
        else
            cout << a / gcd(a, b) * b << "\n";
    }
    return 0;
}