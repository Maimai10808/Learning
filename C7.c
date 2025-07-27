#include <stdio.h>
#include <string.h>

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

    /*

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

*/

// 29.quiz game

/*
int main() {
    char answer[100];
    int  score = 0;

    printf("Welcome to the Quiz Game!\n");
    printf("Let's begin!\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("a) Berlin\nb) London\nc) Paris\nd) Rome\n");
    printf("Your answer: ");
    scanf("%s", answer);


    // “如果用户输入的是小写的 c 或大写的 C，就算答对。”
    if (strcmp(answer, "c") == 0 || strcmp(answer, "C") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is c) Paris.\n\n");
    }

    // Question 2
    printf("2. What is 9 x 9?\n");
    printf("a) 81\nb) 72\nc) 99\nd) 108\n");
    printf("Your answer: ");
    scanf("%s", answer);

    if (strcmp(answer, "a") == 0 || strcmp(answer, "A") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is a) 81.\n\n");
    }

    // Question 3
    printf("3. Who wrote 'Romeo and Juliet'?\n");
    printf("a) Dickens\nb) Shakespeare\nc) Hemingway\nd) Orwell\n");
    printf("Your answer: ");
    scanf("%s", answer);

    if (strcmp(answer, "b") == 0 || strcmp(answer, "B") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is b) Shakespeare.\n\n");
    }

    // Final score
    printf("Your final score is: %d out of 3\n", score);

    if (score == 3) {
        printf("🎉 Excellent! You got all questions right!\n");
    } else if (score == 2) {
        printf("👍 Good job!\n");
    } else {
        printf("😅 Try again to improve your score.\n");
    }

    return 0;
}

*/

/*

int main() {
    // 问题数组
    char *questions[] = {
        "1. What is the capital of France?\n  a) Berlin\n  b) London\n  c) Paris\n  d) Rome",
        "2. Who wrote 'Hamlet'?\n  a) Dickens\n  b) Shakespeare\n  c) Tolstoy\n  d) Homer",
        "3. What is 2 + 2?\n  a) 3\n  b) 4\n  c) 5\n  d) 6"
    };

    // 正确答案数组（小写）
    char *answers[] = { "c", "b", "b" };

    // 问题数量
    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    int score = 0;
    char userAnswer[10];

    printf("📘 Welcome to the Quiz Game!\n\n");

    // 遍历所有问题
    for (int i = 0; i < numQuestions; i++) {
        printf("%s\n", questions[i]);         // 打印问题
        printf("Your answer: ");
        scanf("%s", userAnswer);              // 获取答案

        // 转为小写以忽略大小写
        if (userAnswer[0] >= 'A' && userAnswer[0] <= 'Z') {
            userAnswer[0] = userAnswer[0] + ('a' - 'A');
        }

        // 比较答案是否正确
        if (strcmp(userAnswer, answers[i]) == 0) {
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Wrong! The correct answer was: %s\n\n", answers[i]);
        }
    }

    // 最终得分
    printf("🎉 Quiz Finished! You got %d out of %d questions correct.\n", score, numQuestions);

    return 0;
}

*/


// 30.ternary operator

//  condition ? expression_if_true : expression_if_false;

/*

const char *result;
if (number % 2 == 0) {
    result = "偶数";
} else {
    result = "奇数";
}
    */

int main() {
    int number = 7;

    // 使用三元运算符判断奇偶
    const char *result = (number % 2 == 0) ? "偶数" : "奇数";

    printf("数字 %d 是 %s。\n", number, result);

    return 0;
}

/*

🔹 const char *result 是什么意思？

它表示：
	•	result 是一个指向字符（char）的指针。
	•	这个指针指向的字符内容是只读的（const），也就是说你不能通过 result 去修改它指向的字符串内容。


    🔸 举个例子来说明：

const char *str = "hello";

这个 str 实际上指向的是一个字符串 "hello" 在内存中的起始地址。

你可以这样访问：

printf("%s\n", str);  // 输出 hello

但是你不能修改它的内容，比如下面这样是非法的：

str[0] = 'H';  // ❌ 错误，修改了只读字符串


🔸 为什么用指针而不是数组？

因为 "奇数" 和 "偶数" 是 字符串字面量，它们在内存中是固定的、只读的，返回的其实是一个指向这些字符串的地址。

所以你需要用一个 指针变量 来保存这个地址，而不是复制整段字符串。使用 const char * 是最常见和高效的方式。


你可以理解为：result 是一个“指向文字内容的箭头”，箭头不能改内容，只能指向不同的字符串。

你问得非常好，这是 C 语言编程里一个非常重要的优化思想。我们来详细讲一讲——

⸻

✅ 这样做的意义是什么？

使用 const char *result = "奇数"; 而不是直接复制整个字符串，有三个主要好处：

1. 🚀 节省内存（不复制字符串）
	•	字符串 "奇数" 是保存在程序的只读区（通常是 .rodata 段）中。
	•	多次使用这个字符串时，只需要用一个指针指过去即可，不会在内存中反复复制。
	•	这相比用 char result[] = "奇数"; 会节省内存（后者每次都会复制一份新字符串）。

👉 所以：用指针而不是复制，可以避免重复分配内存，节省空间。

⸻

2. ⚡ 提高程序效率
	•	字符串拷贝是比较慢的，尤其当字符串很长时。
	•	使用指针只是在栈中保存一个地址，不涉及内存拷贝，速度快。

👉 所以：访问快，不做不必要的拷贝，性能更好。

⸻

3. 📛 防止误修改（更安全）
	•	使用 const 修饰指针，意味着你不允许修改这个字符串的内容，编译器会报错提醒。
	•	这是良好的编码习惯，防止程序员误操作。

👉 所以：增加代码安全性，遵守只读数据的访问规范。

⸻

🧠 那是不是所有“不需要修改的数据”都该用指针？

大多数时候：✅ 是的，推荐使用指针指向常量数据。

常见使用场景：
	•	字符串常量（如菜单项、错误提示、题目选项）
	•	配置项（如只读参数、系统标志）
	•	表格或字典的静态条目

使用 const T * 来引用这些数据，避免不必要的复制和潜在错误。

⸻

❗ 注意一点

只有当数据的生命周期足够长（比如全局字符串、静态数组、堆分配内存等）才适合用指针指向它。

否则，如果你指向的是一个临时变量或者函数内局部数组，那么函数一结束这个地址就悬空了（悬垂指针），会造成严重错误。

⸻

✍️ 举个更实际的例子：

const char *messages[] = {
    "欢迎进入系统",
    "请输入用户名",
    "操作成功",
    "操作失败",
    "再见"
};

你可以通过指针数组来引用这些文字，而不用为每一条消息都开一块内存。尤其适用于菜单、UI 文案、错误码提示等。

⸻

✅ 总结一句话：

程序中所有不需要修改的静态字符串/数据，能用指针引用就不要复制。这样既省内存又提效率，还防误操作，是专业 C 编程的基本习惯之一。

⸻


*/


