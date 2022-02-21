#include <iostream>
using namespace std;
int main()
{
	cout << "Input numbers of column:";
	int n;
	if (!(cin>>n) || n <=0)
	{
		cout << "Wrong input!";
		return -1;
	}
		int result = 1;
		for (int i = 0; i < n; ++i)
		{
			result *= 2;
			cout << " 2 in " << i << "pow = " << result << endl;
		}
		system("pause");
		return 0;
}