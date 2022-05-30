#include<iostream>
using namespace std;
int main()
{
int X[3][3], Y[3][3], MULTI[3][3];
int sum=0, i, j, k;
cout<<"Enter element of first matrix : ";

cout<<endl;
for(i=0; i<3; i++){
for(j=0; j<3; j++){
cin>>X[i][j];
}
}
cout<<"Enter element of second matrix : ";
cout<<endl;
for(i=0; i<3; i++){
for(j=0; j<3; j++){
cin>>Y[i][j];
}
}
for(i=0; i<3; i++){
for(j=0; j<3; j++){
sum=0;
for(k=0; k<3; k++){
sum = sum + X[i][k] * Y[k][j];
}
MULTI[i][j] = sum;
}
}
cout<<"Multiplication of two Matrices X and Y is : ";
cout<<endl;
for(i=0; i<3; i++){
for(j=0; j<3; j++){
cout<<MULTI[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
