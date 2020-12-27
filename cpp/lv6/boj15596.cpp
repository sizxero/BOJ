#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int>& a)
{
	long long sum = 0;
	for (int i = 0; i < a.size(); i++)
		sum += a.at(i);
	return sum;
}

int main()
{
	vector<int> a;
	a.push_back(1); a.push_back(2); a.push_back(3); a.push_back(4);
	cout << sum(a);
	return 0;
}