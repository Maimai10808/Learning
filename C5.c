#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // MAC

// 17. while loops


/*

int main() {

     while (1 == 1)
    {
        printf("HELP! I'M STUCK IN A LOOP");
    }

    int number = 1;

    do {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);


    }while (number <=0);



    return 0;
}

*/


/*

int main() {

    bool isRunning = true;
    char response = '0';

    while (isRunning)
    {
        printf("You are playing a game\n");
        printf("Would you like to continue?(Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y'){
            isRunning = false;
        }
    }

    return 0;
}

*/

// 18. for  loops

int main() {

    // for loop = Repeat some code a limited # of times
    //  for(Initialization; Condition; Update)

    for(int i = 10; i >= 0 ; i--){
        sleep(1);
        printf("%d\n", i);
    };


    return 0;
}

