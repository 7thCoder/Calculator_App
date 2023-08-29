/*
*   Description: Simple calculator program u
*   Date: 29/08/2023
*/
#include <stdio.h>

int main(){
    int num1,num2,choice;

    printf("Weloome to the calculator app \n");
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the Second number: \n");
    scanf("%d",&num2);

    printf("Chose an operation: \n");
    printf("1 - for Addition \n");
    printf("2 - for Subtraction \n");
    printf("3 - for Multiplication \n");
    printf("4 - for Division \n");
    scanf("%d",&choice);


    switch (choice){
        case 1 :
            addition(num1,num2);
            break;
        case 2:
            subtraction(num1,num2);
            break;
        case 3:
            multiplication(num1,num2);
            break;
        case 4:
            division(num1,num2);
            break;
        
        default:
         printf("Please make a choice");
    }

    return 0;
}