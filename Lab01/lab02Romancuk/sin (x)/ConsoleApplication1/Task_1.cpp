#include <iostream>
using namespace std;
int funk(double * y, int k)
{
	int i;
	int count = 0;
	for (i = 0; i < k; ++i)
	{
		cin >> y[i];
		if ((y[i]) < (y[i - 1] + y[i + 1]) / 2)
		{
			count++;
			cout << "ok" << endl;
		}
	}
	cout << "k = " << count << endl;
	return count;
}
int main()
{
	int a;
	int k;
	cout << "Input a: ";
	cin >> a;
	cout << "Input number of array elements: ";
	cin >> k;
	double *y = 0;
	y = new double[a];
	funk(y, k);
	system("pause");
	return 0;
}





