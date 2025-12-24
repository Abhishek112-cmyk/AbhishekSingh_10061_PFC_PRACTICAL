// Sum of even numbers from 1 to n

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 != 0){
            continue;          // skips the odd value of i 
        }
        sum = sum + i;
    }
    printf("Sum of even numbers is : %d",sum);

}