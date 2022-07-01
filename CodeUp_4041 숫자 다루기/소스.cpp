#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
	stack<int> s;
	int num, sum = 0, n = 0;

	cin >> num;

	while (num)
	{
		s.push(num % 10);
		sum += num % 10;
		num /= 10;
	}

	num = 0;
	while (s.size())
	{
		num += s.top() * pow(10, n++);
		s.pop();
	}

	cout << num << endl;
	cout << sum;

	return 0;
}