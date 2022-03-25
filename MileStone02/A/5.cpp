#include<iostream>
using namespace std;

int main(){
	
	int marks;
	
	cout<<"enter your marks:\n";
	cin>>marks;
	
	if(marks<25){
		cout<<"your grade is F";
	}
	else if((marks<25)&&(marks<45)){
		cout<<"your grade is E";
	}
	else if((marks<45)&&(marks<50)){
		cout<<"your grade is D";
	}
	else if((marks<50)&&(marks<60)){
		cout<<"your grade is C";
	}
	else if((marks<60)&&(marks<80)){
		cout<<"your grade is B";
	}
	else if(marks<80){
		cout<<"your grade is A";
	}
	else{
		cout<<"not correct marks";
	}
	return 0;
}
