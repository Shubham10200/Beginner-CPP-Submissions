#include <iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	cout << "enter the number of rows and columns:";
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		for (j = i; j < n; j++)
		{
			cout << 6 - i;
		}
		for (j = i; j >= 1; j--)
		{
			cout << 6 - j;
		}
		cout << "\n";
	}
}
