// ABC triangle

#include<stdio.h>
void abc_triangle(int n){
    for(int i = 1 ; i <= n ; i++){
        char ch = 'A';
        for(int j = 1 ; j <= i ; j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    abc_triangle(n);
}