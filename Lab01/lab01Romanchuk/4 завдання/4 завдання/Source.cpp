#include<iostream> 
using namespace std;
void fillMatrix(int **A, int N);
void printMatrix(int **A, int n);


int main()
{
	int n;
	cout << "Input size matrix = ";
	cin >> n;
	int **A = new int *[n];
	for (int i = 0; i < n; ++i)
		A[i] = new int[n];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			A[i][j] = 0;
		}
	fillMatrix(A, n);
	cout << "Your matrix:" << endl;
	printMatrix(A, n);
	system("pause");
	return 0;
}

void fillMatrix(int **A, int N)
{
	for (int i = 0, j = 1; i < N; ++i, ++j)
	{
		A[i][i] = j*(j + 1);
	}
}

void printMatrix(int **A, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << '\t' << A[i][j];
		cout << endl;
	}
}