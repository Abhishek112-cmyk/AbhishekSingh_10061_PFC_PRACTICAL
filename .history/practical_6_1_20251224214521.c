#include<stdio.h>
int main(){
    for(int i = 1 ; i <=5 ; i++){      // using for loop
        printf("%d\n",i);
    }
    printf("\n");

    int a = 1;
    while(a <= 6){                    // using while loop
        printf("%d \n",a);
        a++;
    }
    printf("\n");

    int b = 1;                       // using do-while loop
    do{
        printf("%d\n",b);
        b++;
    }
    while(b <= 4);
}