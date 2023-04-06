#include <iostream>
using namespace std;


void printDiamond(int n)
{
	int space = 2*n - 2;

	for (int i = 0; i < 2*n; i+=2)
	{
		
		for (int j = 0; j < space/2; j++)
			cout << " ";
		for (int j = 0; j > space/2; j++)
			cout << " ";

		
		for (int j = 0; j <= i; j++)
			cout << '*';

		cout << endl;
		space-=2;
	}

	
	space = 0;

	
	for (int i = 2*n-1; i > 0; i-=2)
	{
		
		for (int j = 0; j < space/2; j++)
			cout << " ";
		for (int j = 0; j > space/2; j++)
			cout << " ";

		
		for (int j = 0; j < i; j++)
			cout << '*';

		cout << endl;
		space+=2;
	}
}


int main()
{
	int N = 0;
	cin >> N;
	printDiamond(N);
	return 0;
}

