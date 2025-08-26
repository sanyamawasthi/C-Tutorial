#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){enum Day {sun, mon, tues, wednes, thurs, fri, sat};

	int h[sat+1] = {32,4,356,23,67,4,67};
	for (int day=sun; day<=sat; day++){
		cout << "The high temperature for day " << day << " was " << h[day] << endl;}}
