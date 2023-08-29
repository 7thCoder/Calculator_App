/*
*   Description: Simple calculator program 
*   Date: 29/08/2023
*/
#include <stdio.h>

int addition(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int subtraction(int a, int b) {
    int subs;
    subs = a - b;
    return subs;
}



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
            
            printf("The result of this addition is %d",addition(num1,num2));
            break;
        case 2:
            printf("The result of the subtraction is %d", subtraction(num1,num2));
            break;
        case 3:
            // multiplication(num1,num2);
            break;
        case 4:
            // division(num1,num2);
            break;
        
        default:
         printf("Please make a choice");
    }

    return 0;
}