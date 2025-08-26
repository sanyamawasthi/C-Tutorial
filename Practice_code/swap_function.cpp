#include <iostream>
using namespace std;

void swap(float , float); //declaring the function

int main(){
	float x,y ;
	cout << "Enter the numbers : "; cin >> x >> y;
	swap(x,y);
	return 0;
} // main code lies in here

void swap(float x, float y) //defining the function here
{	float t;
	t = x;
	x = y;
	y = t;
	cout << "Now value of x is : " << x << endl;
	cout << "And value of y is : " << y << endl;
}

// defining a function before main() function can be done too.
// If you just declare the function or just define the function after the main()
// function, you will obtain an error
