#include<iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	while (x != 42)
	{
		cout << x;
		cin >> x;
	}
	return 0;
}