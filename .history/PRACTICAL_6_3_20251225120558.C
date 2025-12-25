// ATM pin authentication

#include <stdio.h>

int main() {
    int stored_pin = 5627;
    int entered_pin;
    int attempts = 0;

    while(attempts < 3 && scanf("%d",&entered_pin) == 1){

        if(entered_pin == stored_pin){
            printf("Access Granted .\n");
            return 0;
        }
        attempts++;
    }
    if(attempts >= 3){
        printf("Locked !\n");
    }
    else{
        printf("Invalid pin \n");
    }
}