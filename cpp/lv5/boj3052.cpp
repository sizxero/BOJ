#include <iostream>
using namespace std;

int main()
{
	int num, cnt = 0;
	int arr[42] = {0, };
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		if (!arr[num % 42]++)
			cnt++;
	}
	cout << cnt;
	return 0;
}