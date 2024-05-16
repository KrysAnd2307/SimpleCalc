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
    do {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Program ended\n");
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                printf("Select the correct program!!!\n");
                break;
        }
    }while(choice != 0);



    return 0;
}
