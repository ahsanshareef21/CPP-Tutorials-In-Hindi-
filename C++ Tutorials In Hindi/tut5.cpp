#include <iostream>
using namespace std;

int main()
{
    int num1 , num2;

    // This is called  insertion << operator
    cout << "Enter the value of num1:\n";

    // This is called Extraction >> operator
    cin>>num1;
    
    cout << "Enter the value of num2:\n";
    cin>>num2;

    cout<<"The sum is "<< num1+num2;
    
    return 0;
}
