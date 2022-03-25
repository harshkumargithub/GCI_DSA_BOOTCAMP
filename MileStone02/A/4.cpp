#include<iostream>
using namespace std;

int main(){
	
	int salary,year,netbonusamount;
	
	cout<<"enter salary:\n";
	cin>>salary;
	
	cout<<"enter year:\n";
	cin>>year;
	
	if(year>5){
		netbonusamount=0.05*salary;
		cout<<"your net bonus amount is"<<netbonusamount;
	}
	else{
		cout<<"no bonus";
	}
	return 0;
}
