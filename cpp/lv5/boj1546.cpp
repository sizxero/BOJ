#include <iostream>
using namespace std;

int main()
{
	int size;  cin >> size;
	float max = 0, sum = 0;
	float *arr = new float[size];
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
		if (max < arr[i])	max = arr[i];
	}

	for (int i = 0; i < size; i++) 
	{
		arr[i] = (arr[i] / max) * 100;
		sum += arr[i];
	}

	cout << sum / size;
	return 0;
}