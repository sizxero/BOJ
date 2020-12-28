#include <iostream>
using namespace std;

int main()
{
	int n;	cin >> n;
	char* narr = new char[n];
	cin >> narr;

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += *(narr + i) - '0';
	
	cout << sum;
}