#include <stdio.h>


/*
// 13. functions

void happyBirthday() {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
}

void happyBirthdate() {
    printf("\nHappy birthday to me!");
    printf("\nHappy birthday to me!");
    printf("\nHappy birthday to me!");
    printf("\nHappy birthday to me!");
}

void happy(char name[], int age) {
    printf("\nHappy birthday to me!");
    printf("\nHappy birthday to me!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}


int main() {

    char name[] = "Bro";
    int age = 25;

    happyBirthday();
    happyBirthdate();
    happy(name, age);

    return 0;
}

*/




/*

// 13. return

int square(int num) {

    int result = num * num;

    return result;
}

*/

/*

int main() {
    // return = returns a value back to where you call a function

    int x = square(2);

    printf("%d\n", x);



    return 0;
}
    */


    // 14. variable scope

 void localScopeExample() {
    int localVar = 10;  // Valid only within this function

    printf("Local variable in localScopeExample: %d\n", localVar);
}

void globalScopeExample() {


    // Access the global variable
    extern int globalVar;  // Declare the global variable using extern
    printf("Global variable in globalScopeExample: %d\n", globalVar);
}

int globalVar = 100;  // Global variable



int main() {


    // Local variable within the function
    int localVar = 20;  // Valid only within the main function

    printf("Local variable in main: %d\n", localVar);

    // Call the function with local scope
    localScopeExample();

    // Call the function with global scope
    globalScopeExample();

    return 0;
}












