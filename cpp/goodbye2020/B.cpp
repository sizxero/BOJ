#include <iostream>
using namespace std;

int distance(char* s1, char* s2)
{
	int d = 0;

	for (int i = 0; i < 4; i++)
		if (s1[i] != s2[i])
			d++;
	return d;
}

int threedistance(char* s1, char* s2, char* s3)
{
	int d = 0;
	d += distance(s1, s2);
	d += distance(s2, s3);
	d += distance(s3, s1);
	return d;
}

void findThreeDistance(int n, char** mbti)
{
	if(n == 3)
		cout << threedistance(*(mbti + 0), *(mbti + 1), *(mbti + 2)) << endl;
	else
	{
		int ans = 9999999;
		for (int i = 0; i < n - 2; i++)
			for (int j = i + 1; j < n - 1; j++)
				for (int k = j + 1; k < n; k++)
					ans = min(ans, threedistance(*(mbti + i), *(mbti + j), *(mbti + k)));
		cout << ans << "\n";
	}
}

int main()
{
	int t;	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;	cin >> n;
		char** mbti = new char*[n];
		for (int j = 0; j < n; j++)
		{
			char* m = new char[4];
			cin >> m;
			*(mbti+j) = m;
		}
		findThreeDistance(n, mbti);
	}
		
	return 0;
}