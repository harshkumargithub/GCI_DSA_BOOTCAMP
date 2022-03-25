#include<iostream>
using namespace std;

int main(){
	
	float a,b,c;
	
	cout<<"enter the number of classes held\n";
	cin>>a;
	
	cout<<"enter the number of classes attended\n";
	cin>>b;
	
	if(b<=a){
		c=(b/a)*100;
		cout<<"%"<<c<<"of class attended \n";
		
		if(c<=75){
			cout<<"student is not allowed to sit in his/her exam";
		}
		else{
			cout<<"student is allowed to sit in his/her exam";
		}
	}
	else{
		cout<<"Attended classes cannot be more than total classes held";
	}
	return 0;
}
