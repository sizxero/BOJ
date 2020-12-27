#include <iostream>
using namespace std;

int main()
{
	int c;	cin >> c;

	for (int i = 0; i < c; i++) 
	{
		int n;	cin >> n;
		int* score = new int[n];
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> score[i];
			sum += score[i];
		}
		double avg = sum / n;
		int good = 0;
		for (int i = 0; i < n; i++)
		{
			if (score[i] > avg)	good++;
		}

		printf("%.3f%%\n", (double)good / n * 100);
	
	}
	return 0;
}