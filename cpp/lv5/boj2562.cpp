#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int max = 0, maxindex;
	int* arr = new int[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (max < arr[i]) 
		{
			max = arr[i];
			maxindex = i + 1;
		}
	}
	cout << max << "\n" << maxindex;
	return 0;
}