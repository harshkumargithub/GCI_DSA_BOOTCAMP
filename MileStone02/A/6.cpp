#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout<<"enter age of first person:\n";
	cin>>a;
	cout<<"enter age of second person:\n";
	cin>>b;
	cout<<"enter age of third person:\n";
	cin>>c;
	
	if((a>b)&&(a>c)){
		if(b>c){
			cout<<"a is the oldest and c is youngest";
		}
		else{
			cout<<"a is the oldest and b is youngest";
		}
	}
	else if((b>a)&&(b>c)){
		if(c>a){
			cout<<"b is the oldest and a is youngest";
		}
		else{
			cout<<"b is the oldest and c is youngest";
		}
	}
	else {
		if(a>b){
			cout<<"c is the oldest and b is youngest";
		}
		else{
			cout<<"c is the oldest and a is youngest";
		}
	}
	return 0;
}
