#include <cstdlib>
#include <iostream>

using namespace std;
float taxCalculator(int x)
{    
    if(x>0 && x<=100000){ return 0;}
    else if(100000<x && x<=200000){return (.10)*(x-100000);}
    else if(200000<x && x<=500000){ return 10000+(.20)*(x-200000);}
    else { return 10000+60000+(.30)*(x-500000);}
}

int main(int argc, char *argv[])

{   
    int x,y;
    
     cout<<"Enter the gross income:"<<endl;
     cin>>x;
     cout<<"Enter the savings amount:"<<endl;
     cin>>y;
     if(x>y){
	 if(0<y && y<=100000){x=x-y;}
     else{x=x-100000;}
    }
    
    cout<<"Tax:"<< taxCalculator(x)<<endl;
    return EXIT_SUCCESS;
}
