#include<iostream>
#include<algorithm>
#include <cstring>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{

    char arr[10];
    cin >> arr;

    sort(arr, arr + strlen(arr), compare);
    for (int i = 0; i < strlen(arr); i++) {
        cout << arr[i];
    }

    return 0;
}
