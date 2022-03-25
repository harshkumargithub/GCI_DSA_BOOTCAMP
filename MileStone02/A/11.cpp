#include<iostream>
using namespace std;

int main(){
	
	char ch;
	cout<<"enter any character:";
	cin>>ch;
	
	if(ch>=65&&ch<=90){
		cout<<"entered character is uppercase";
		}
		else if(ch>=97&&ch<=122){
			cout<<"entered character is lowercase";
		}
		else{
			cout<<"entered is special character";
		}
    return 0;
}
