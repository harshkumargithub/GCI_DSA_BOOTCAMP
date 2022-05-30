#include <stdio.h> 
 
int sumOfDigits(int); 
 
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
     
    int sum = sumOfDigits(num); 
    printf("Sum of digits of %d is %d", num, sum); 
    return 0; 
} 
 
int sumOfDigits(int n) { 
    if (n == 0) return 0; 
    int dig = n % 10; 
    return dig + sumOfDigits(n / 10); 
}
