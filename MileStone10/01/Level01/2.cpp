#include <iostream>
#include <conio.h>
using namespace std;

int multiply(int x, int y);
int main()

{
    int num1; 
    int num2; 
    int product; 

    cout << "Enter the first numbers" << endl;
    cin>>num1; 
    cout << "Enter the second numbers" << endl;
    cin>>num2;

    product=multiply(num1, num2);

    cout<<"Product of two numbers "<<product<<endl;
    getch();
    return 0;
}

int multiply(int x, int y)
{
    return (x*y); 
}
