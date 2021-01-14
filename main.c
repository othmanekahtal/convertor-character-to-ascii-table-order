#include <stdio.h>
int main() {
    unsigned char sign='@';
    int order_ASCII,choice;
    printf("========================CONVERTOR CHARACTER TO ASCII TABLE ORDER========================\n");
    printf("what do you want convert (Enter Number):\n 1.ASCII table order to char \t 2.char to ASCII table \n choice :");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Enter your ASCII order (Number) :");
        scanf("%i",&order_ASCII);
        printf("%i == \"%c\" in ASCII table",order_ASCII,order_ASCII);
    }
    else if (choice == 2){
        printf("Enter your Character here:");
        scanf(" %c",&sign);
        printf("%c == %d",sign,sign);
    }
    else {
        printf("your choice is wrong, try again !!!");
    }
    printf("\nProgram is finished");
}