#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b, c;	cin >> a >> b >> c;
	int arr[10] = {0, };
	int result = a * b * c;
	while (result /10 != 0) 
	{
		arr[result % 10]++;
		result /= 10;
	}
	arr[result]++;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		cout << arr[i] << "\n";
	return 0;
}