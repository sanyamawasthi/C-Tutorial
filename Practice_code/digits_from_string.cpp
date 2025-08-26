#include <bits/stdc++.h>
using std::cout, std::cin, std::endl, std::string;

int findSum(string str)
{
    string temp = "";

    int sum = 0;

    for (char ch : str) {
        if (isdigit(ch)) // to check if the element is digit or non-digit
            temp += ch; // if element is digit then added to the temp string

        else {
            sum += atoi(temp.c_str()); // if find any non-digit element then start the summation

            temp = ""; // after summation reset the temp to empty string
        }
    }

    return sum + atoi(temp.c_str());
}

int main()
{
    string str;
    cout << "enter the string : "; cin >> str;

    cout << findSum(str) << endl; // calling the function to find the sum of digits in string

    return 0;
}
