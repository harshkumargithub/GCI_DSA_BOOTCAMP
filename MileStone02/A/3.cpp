#include<iostream>
using namespace std;

int main(){
	
	int cost, quantity, price, discount;
	
	cout<<"enter quantity:\n";
	cin>>quantity;
	
	cout<<"enter price:\n";
	cin>>price;
	
	cost=quantity*price;
	
	if(cost>1000){
		discount = (cost*0.1);
		cost = cost-discount;
		cout<<"your total cost is"<<cost;
	}
	else{
		cout<<"no discount";
	}
	return 0;
}
