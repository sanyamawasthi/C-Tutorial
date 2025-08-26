#include <iostream>

void sort(float [], int);

int main(){int n; std::cout << "Enter the size of array:"; std::cin >> n; std::cout << std::endl;
	float a[n];
	std::cout << "Enter the numbers:" << std::endl; float x;
	for (int i=0; i<n; i++){std::cout << "a["<<i<<"]:"; std::cin >>x;
		a[i]=x;}
	std::cout << std::endl;
	sort(a,n);
	return 0;
}

void sort(float a[], int n){for (int i=1; i<n; i++){
	for (int j=0; j<n-i; j++ ){
		if (a[j]>a[j+1]) std::swap(a[j],a[j+1]);}}

	std::cout << "Sorted list: ";
	for (int k=0; k<n; k++){std::cout << a[k] << " ";}
}
