#include <iostream>
#include <cmath>
using namespace std;

int fac(int );
int perm(int, int );

int main()
{	int n,k;
	cout << "Remember the frist number will go up" << endl;
	cout << "Enter the number to find its factorial: ";
	cin >> n >> k;
	cout << "permutation of " << n << " & " << k << " is " <<perm(n,k)<<endl;
	return 0;
}

int fac(int a)
{	if (a<0){return 0;}
	else if (a==0){return 1;}
	else
	{	int temp=1;
		for (int i=1; i<=a; i++)
		{	temp *= i;
		}
		return temp;
	}
}

int perm(int n, int k)//permuatation = n!/(n-k)! 
{	float m = fac(n)/fac(n-k);
	return m;
}
