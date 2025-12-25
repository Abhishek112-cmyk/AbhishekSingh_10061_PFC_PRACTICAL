// Hourglass of length 2n-1

#include<stdio.h>
void pattern_1(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i-1 ; j++){
            printf(" ");
        }
        for(int j = 1 ; j <= n-i+1 ; j++){
            printf("* ");
        }
        for(int j = 1 ; j <= i-1 ; j++){
            printf(" ");
        }
        printf("\n");
    }
}
void pattern_2(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            printf(" ");
        }
        for(int j = 1 ; j <= i+1 ; j++){
            printf("* ");
        }
        for(int j = 1 ; j <= n-i ; j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    pattern_1(n);
    pattern_2(n-1);
}