#include <stdio.h>
#include "calc.h"

void menu(){
    printf("0 - End the program\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Division\n");
    printf("4 - Multiplication\n");
}


int main() {
    int choice = 0;
    float a = 0;
    float b = 0;
    do {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 0: {
                printf("Program ended\n");
                break;
            }
            case 1: {
                printf("a = \n");
                scanf("%f", &a);
                printf("b= \n");
                scanf("%f", &b);
                float result = Add(a, b);
                printf("%f + %f = % f\n",a,b,result);
                break;
            }
            case 2: {
                printf("a = \n");
                scanf("%f", &a);
                printf("b= \n");
                scanf("%f", &b);
                float result = Sub(a, b);
                printf("%f - %f = % f\n",a,b,result);
                break;
            }
            case 3: {
                printf("a = \n");
                scanf("%f", &a);
                printf("b= \n");
                scanf("%f", &b);
                if(b != 0) {
                    float result = Div(a, b);
                    printf("%f / %f = % f\n", a, b, result);
                    break;
                }
                else{
                    printf("Division by 0!!!\n");
                    break;
                }
            }
            case 4: {
                break;
            }
            default: {
                printf("Select the correct program!!!\n");
                break;
            }
        }
    }while(choice != 0);



    return 0;
}
