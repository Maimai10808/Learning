#include <stdio.h>
#include <string.h>


/*

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

    */

    // 7. weight converter

    /*

int main() {

    // WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator");
    printf("1. kilograms to Pounds\n");
    printf("2. Pounds to kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Kilograms to pounds
        printf("Enter your weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n",kilograms, pounds);

    }
    else if (choice == 2) {
        // pounds to Kilograms
        printf("Enter your weight in pounds: ");
         scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n",pounds, kilograms);
    }
    else {
        printf("Invalid choice! Please try again\n");
    }

    return 0;
}

*/

/*

// 8. temperature program

int main() {

    //  so easy for me it is similar to 7. weight converter

    return 0;
}

*/

/*

// 9. switches

int main() {

    // switch = An alternative to using many if- else statements
    // More efficient w/ fixed integer values

    int dayOWeek = 0;

    printf("plz typing a num: ");
    scanf("%d", &dayOWeek);

    switch (dayOWeek)
    {
        case 1:
        printf("It is Monday");
        break;

        case 2:
        printf("It is 2");
        break;

        case 3:
        printf("It is 3");
        break;
        case 4:
        printf("It is 4");
        break;
        case 5:
        printf("It is 5");
        break;
        case 6:
        printf("It is 6");
        break;
        case 7:
        printf("It is 7");
        break;

    default:
    printf("error, plz try again");
        break;
    }

    return 0;
}
    */

    // 10. nested if statements

    /*

int main() {
    int score;

    printf("Please enter your score (0 - 100): ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        if (score >= 60) {
            if (score >= 85) {
                printf("🌟 Grade Level: Excellent\n");
            } else {
                printf("🙂 Grade Level: Pass\n");
            }
        } else {
            if (score >= 40) {
                printf("⚠️ Grade Level: Fail (Needs Improvement)\n");
            } else {
                printf("❌ Grade Level: Severe Fail (Consider Retaking)\n");
            }
        }
    } else {
        printf("❗ Invalid input: Score should be between 0 and 100.\n");
    }

    return 0;
}
    */

     // 11. calculator


int main() {
    double num1, num2, result;
    char operator;

    printf("==== Simple Calculator ====\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}

// 12. logical operators

// && || !









