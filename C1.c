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

/*
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
fgets(目标数组, 最多读取字符数, 输入来源);

fgets(item, sizeof(item), stdin); 这一行的作用是：

✅ 从标准输入（键盘）读取一整行字符串，并存入 item 这个字符数组中。

🎯 功能特点
	1.	会读取空格和制表符，不像 scanf("%s", ...) 那样遇空格就停止。
	2.	最多读取 sizeof(item) - 1 个字符，并自动在末尾加 \0。
	3.	在用户按下 Enter 时，会把换行符 \n 一起读进去（这点要特别注意）。

⸻


fgets(destination_array, maximum_number_of_characters_to_read, input_source);

The line

fgets(item, sizeof(item), stdin);

does the following:

✅ Reads a full line of text from standard input (keyboard) and stores it into the item character array.

⸻

🎯 Key Features
	1.	Reads spaces and tab characters, unlike scanf("%s", ...) which stops at whitespace.
	2.	Reads up to sizeof(item) - 1 characters, and automatically appends a \0 (null terminator) at the end.
	3.	Includes the newline character \n when the user presses Enter (this is important to remember).

⸻
*/
int main() {

    // MAD LIBS GAME

    char noun1[50] = "";
    char noun2[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective(description):");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun(animal or person):");
    fgets(noun1, sizeof(noun1), stdin);
    noun1[strlen(noun1) - 1] = '\0';


    printf("Enter an adjective(description):");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter an verb(ending w/ -ing):");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective(description):");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Enter a noun(a object):");
    fgets(noun2, sizeof(noun2), stdin);
    noun2[strlen(noun2) - 1] = '\0';


    printf("%s\n", noun1);
    printf("%s\n", verb);
    printf("%s\n", adjective1);
    printf("%s\n", adjective2);
    printf("%s\n", adjective3);
    printf("%s\n", noun2);


    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun1);
    printf("%s was %s and %s!\n", noun1, adjective1, verb);
    printf("I was %s!\n", adjective3);

    return 0;
}



















