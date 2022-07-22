/******************
Advanced calculator in C programming

*******************/


#include <stdio.h>
#include<math.h>
#include <stdlib.h>

float menu(char op);
float add(float n1,float n2);
float subtract(float n1,float n2);
float multiply(float n1,float n2);
float divide(float n1,float n2);
float power(float n1,float n2);
float remainderFind(float n1,float n2);

int main() {
    char operations;
    printf("\nArithmetic Operations.\n\n");
    printf("* Enter + symbol for Additions\n");
    printf("* Enter - symbol for Subtractions\n");
    printf("* Enter * symbol for Multiplications\n");
    printf("* Enter / symbol for Division\n");
    printf("* Enter ^ symbol for Power\n");
    printf("* Enter %% symbol for Remainder\n");
    printf("\nControl Operations.\n\n");
    printf("* Enter # symbol for Terminate\n");
    printf("* Enter $ symbol for Reset\n");
    printf("********************************\n");
    scanf(" %c",&operations);

    if(operations == '+' || operations== '-' || operations== '*' || operations=='/' || operations=='^' || operations=='%'){
        menu(operations);
    } else if(operations == '#'){
        printf("\nProgram Terminated\n");
        exit(0);
    }else if(operations == '$'){
        main();
    }
    else{
        printf("\nSomething Went Wrong! please try again\n");
        exit(0);
    }

    return 0;
}

float menu(char op){
    float n1,n2;
    printf(" Enter first number: \n");
    if ( (scanf("%f",&n1) == 0)){
        printf("...Not number!... \n");
        main();
    }
    printf("Enter second number: \n");
    if ( (scanf("%f",&n2) == 0)){
        printf("...Not number!... \n");
        main();
    }

    switch (op) {
        case '+':
            printf("-----------------------------------\n");
            printf("\nAnswer is %.2f \n", add(n1,n2));
            printf("-----------------------------------\n");
            main();
            break;
        case '-':
            printf("-----------------------------------\n");
            printf("\nAnswer is %.2f \n", subtract(n1,n2));
            printf("-----------------------------------\n");
            main();
            break;
        case '*':
            printf("-----------------------------------\n");
            printf("\nAnswer is %.2f \n", multiply(n1,n2));
            printf("-----------------------------------\n");
            main();
            break;
        case '/':
            printf("-----------------------------------\n");
            printf("\nAnswer is %.2f \n", divide(n1,n2));
            printf("-----------------------------------\n");
            main();
            break;
        case '^':
            printf("-----------------------------------\n");
            printf("Answer is %.2f \n", power(n1,n2));
            printf("-----------------------------------\n");
            main();
            break;
        case '%':
            printf("-----------------------------------\n");
            printf("Answer is %.2f\n ", remainderFind(n1,n2));
            printf("-----------------------------------\n");
            main();
            break;
        default:
            printf("\nUnrecognized operation\n");

    }
}

float add(float n1,float n2){
    return n1+n2;
}

float subtract(float n1,float n2){
    return n1-n2;
}

float multiply(float n1,float n2){
    return n1*n2;
}

float divide(float n1,float n2){
    if (n2 == 0){
        printf("...Dividing a number by Zero is a mathematical error!...\n");
        main();
    } else{
        return n1/n2;
    }
}

float power(float n1,float n2){
    return powf(n1,n2);
}

float remainderFind(float n1,float n2){
    return fmodf(n1,n2);
}
