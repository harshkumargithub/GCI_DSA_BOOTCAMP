#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b==1)
    {
        return a;
    }
    else
    {
        return(a*power(a,b-1));
    }
}

int main()
{
    cout << power(2,4) << "\n";
    return 0;
}
