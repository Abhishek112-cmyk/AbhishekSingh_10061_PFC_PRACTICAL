// Right angle triangle of stars

#include<stdio.h>
void right_angledT(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    right_angledT(n);
}