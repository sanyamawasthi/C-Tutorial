// The array passed to search an element in that needs to be sorted.
#include <iostream>
using namespace std;

void index(int, int [], int);

int main(){int a[] = {1,2,3,4,5,6}; index(4,a,6);
	index(8,a,6);}

void index(int x, int a[], int n){int lo, hi = n-1, i;
	while (lo <= hi){i =  (lo + hi)/2; //going in the middle of array
		if (a[i]==x) cout<<i<<endl;
		if (a[i]<x) lo = i+1; //if number is gretaer, than will search in above half series
		else hi = i-1; //if number is smaller, than will search in 
			       //lower half series
	} // if number is not found
}	
