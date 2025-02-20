#include <stdio.h>
int operation(int choice, int num1, int num2) {
    switch (choice) {
        case 1: 
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            return num1 + num2;
        case 2: 
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            return num1 - num2;
        case 3: 
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            return num1 * num2;
        case 4: 
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            return num1 / num2;
        default: 
            printf("Invalid Choice\n");
            return 0;
    }
}
int main() {
    int choice, res = 0, prev = 0;
    int num1, num2;
    int con = 1;
    while (con == 1) {
        printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\nChoose Option: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            if (prev == 1){
                num1 = res;
                printf("Enter number: ");
                scanf("%d", &num2);
            } 
            else if (prev==0){
                printf("Enter number: ");
                scanf("%d",&num1);
                printf("Enter number: ");
                scanf("%d",&num2);
            }
            else{
                printf("Invalid Choice!\n");
            }
            res = operation(choice, num1, num2);
            printf("Want to continue (1-Yes / 0-No): ");
            scanf("%d", &con);
            if (con == 1) {
                printf("Use previous result? (1-Yes / 0-No): ");
                scanf("%d", &prev);
            }
            else if (con!=1 && con!=0){
                printf("Invalid Choice!\n");
            }
        }
        else {
            printf("Invalid Choice!\n");
            printf("Want to continue (1-Yes / 0-No): ");
            scanf("%d",&con);
            if (con!=1 && con!=0){
            printf("Invalid Choice!\n");
            }
        }
    }
    return 0;
}