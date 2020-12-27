#include <iostream>
#include <climits>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int max = INT_MIN, min = INT_MAX;
	int size;	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << " " << max;


	return 0;
}