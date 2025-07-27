
/*
// 25.Array

#include <stdio.h>


int main() {

    // array = A fixed-size collection of elements of the same data type (Similar to a variable , but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A','B','C','D','E' };
    char name[] = "Mai Yufan";

    numbers[0] = 100;
    numbers[1] = 34;
    numbers[2] = 23;
    numbers[3] = 14;
    numbers[4] = 44;

    for(int i = 0; i < 5; i++) {
        printf("%c ", grades[i]);
    };

    printf("%c", grades[2]);


    return 0;
}
*/

/*
// 26.Array and user input

int main() {

    int scores[5] = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter a score: ");
        scanf("%d ", &scores[i]);
    };

    for(int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    };

    return 0;
}

*/

/*
// 27.2D arrays

int main() {

    // 2D array = An array where each element is an array
    // array[][] = {{},{},{}}

    return 0;
}
    */

// 28.arrays of strings

int main() {
    // 定义一个字符串数组
    const char *fruits[] = {"Apple", "Banana", "Cherry", "Mango", "Peach"};

    // 计算数组大小
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // 遍历并打印每个元素
    for (int i = 0; i < size; i++) {
        printf("I like %s\n", fruits[i]);
    }
    return 0;
}
