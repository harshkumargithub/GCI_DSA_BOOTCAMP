#include<iostream>
using namespace std;

int main(){
	
	int number;
	
	cout<<"enter the number\n";
	cin>>number;
	
	if(number<0){
		cout<<"absolute value is"<<(number*(-1));
	}
	else{
		cout<<"absolute value is"<<number;
	}
    return 0;
}
