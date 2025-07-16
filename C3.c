#include <stdio.h>
#include <string.h>



// 6. if statements

int main() {

    // if statement = Do some code if a condition is true.
    // If the condition is false, don't do it.

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    if (strlen(name) == 0) {
        printf("You did not enter your name. ");
    }
    else {
        printf("Hello %s", name);
    }

    return 0;
}
