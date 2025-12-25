// Swap using pass by reference

#include<stdio.h>
void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 10;
    int y = 20;
    printf("Before swap \n");
    printf("x = %d and y = %d \n",x,y);

    swap(&x , &y);

    printf("After swap \n");
    printf("x = %d and y = %d \n",x,y);
}