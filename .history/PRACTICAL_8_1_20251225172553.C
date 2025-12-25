// Sum of digits of a number 

#include<stdio.h>
int SumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        int last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int result = SumOfDigits(n);
    printf("Sum of digits are : %d",result);
}