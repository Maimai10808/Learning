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

int square(int num) {

    int result = num * num;

    return result;
}



// 13. return

int main() {
    // return = returns a value back to where you call a function

    int x = square(2);

    printf("%d\n", x);



    return 0;
}








