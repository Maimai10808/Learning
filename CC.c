#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main()
{
    int   age      = 0;
    float gpa      = 0.0f;
    char  grade    = '\0';
    char  name[30] = "";

    printf("Enter your gae:");
    scanf("%d", &age);

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}

*/

int main() {
    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?:");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what is the price for each?:");
    scanf("%f", &price);

    printf("How many would you like?:");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("\nYou have bought %d %s \n", quantity, item);
    printf("%c%.2f", currency, total);

    return 0;
}

















