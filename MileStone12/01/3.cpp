#include <iostream>
using namespace std;

int main() {
	
int i, A;
void RowMulti(int A[4][6]);
int Mul[4];
 
for(int i=0;i<4;i++) {  
Mul[i]=1; 
}
for(int j=0;j<6;j++){ 
Mul[i]*=A; 
}
cout<<"Product of row"<<i+1<<"="<<Mul[i]<<endl;

return 0;
}
