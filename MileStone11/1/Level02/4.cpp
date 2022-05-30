#include<iostream>
using namespace std;

int main()
{
  int a[] = { 2, 3, 1, 45, 15};
  int t,i,j;
  for(i = 0;i<4;i++){
    for(j = i+1;j<5;j++){
      if(a[i]>a[j]){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
  for(i = 0;i<5;i++){
    cout << a[i] << "\n";
  }
  return 0;
}
