#include <stdio.h>
int main(){
    int choice,res=0,prev=0;
    int num1,num2,d;
    int con=1;
    while (con==1)
    {
        printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Divison\n Choose Option: ");
        scanf("%d",&choice);
        if (choice>=1 && choice<=4){
            if (prev==1){
            num1=res;
            printf("Enter number: ");
            scanf("%d",&num2);
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
        res = operation(choice,num1,num2);
        printf("Want to continue (1/0): ");
        scanf("%d",&con);
        if (con==1){ 
        printf("Want to use previous result (1/0): ");
        scanf("%d",&prev);
        }
        else if (con!=1 && con!=0){
            printf("Invalid Choice!\n");
        }
        }
        else{
            printf("Invalid Choice!\n");
            printf("Want to continue (1/0): ");
            scanf("%d",&con);
            if (con!=1 && con!=0){
            printf("Invalid Choice!\n");
            }
        }
    }
    return 0;
}
int choice,num1,num2,res;
int operation(choice,num1,num2){
    if (choice==1){
        res = num1+num2;
        printf("%d + %d = %d\n",num1,num2,num1+num2);
    }
    else if (choice==2){
        res = num1-num2;
        printf("%d - %d = %d\n",num1,num2,num1-num2);
    }
    else if (choice==3){
        res = num1-num2;
        printf("%d * %d = %d\n",num1,num2,num1*num2);
    }
    else if (choice==4){
        res = num1-num2;
        printf("%d / %d = %d\n",num1,num2,num1/num2);
    }
    else{
        printf("Invalid Choice\n");
    }
    return res;
}
