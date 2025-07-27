#include <stdio.h>


/*

// 31. typedef


typedef struct {
    char name[50];
    int age;
} Person;


typedef int (*Operation)(int, int);


int add(int a, int b) {
    return a + b;
}


typedef int IntArray5[5];


typedef unsigned int uint;
typedef unsigned char byte;


typedef struct {
    char courseName[50];
    int score;
} Course;

typedef struct {
    char name[50];
    int age;
    Course course;
} Student;


int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"

    //          Helps simplify complex types and improves code readability


    //          typedef existing_type new_name


    Person p1 = {"Alice", 30};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;


    Operation op = add;
    printf("3 + 4 = %d\n", op(3, 4));
    return 0;

    // 🔍 Operation 代表一种函数指针类型，可以使函数指针用起来更直观。


    IntArray5 scores = {90, 85, 78, 92, 88};
    for (int i = 0; i < 5; i++) {
        printf("Score[%d] = %d\n", i, scores[i]);
    }


    uint x = 100;
    byte flag = 0xFF;

    Student s1 = {"Bob", 20, {"Math", 95}};
    printf("Student: %s, Course: %s, Score: %d\n", s1.name, s1.course.courseName, s1.course.score);


    return 0;
}


*/

/*

// 32. enum

// 定义一个表示星期的枚举类型



// 默认从 0 开始
// 默认从 0 开始
// 默认从 0 开始
// 默认从 0 开始
// 默认从 0 开始
enum Weekday {
    Sunday,     // 默认从 0 开始
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum Weekday today = Wednesday;

    // 输出今天是星期几（数字）
    printf("Today is day number: %d\n", today);

    // 判断星期几
    if (today == Wednesday) {
        printf("It's midweek!\n");
    }

    return 0;
}

*/

// 33. structs

/*
// 定义一个结构体类型 Student
struct Student {
    char name[50];
    int age;
    float gpa;
};



    int main() {

        // struct = A custom container that holds multiple
        //          pieces of related information
        //.         Similar to Objects in other languages



// 创建一个 Student 类型的变量并赋值
    struct Student s1 = {"Alice", 20, 3.85};

    // 打印结构体成员
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
    }

*/

/*

// ✅ 进阶：使用 typedef 简化 struct

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

int main() {
    Student s2 = {"Bob", 22, 3.6};
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("GPA: %.2f\n", s2.gpa);
    return 0;
}

*/


// 34. arrays of structs


/*

// 定义结构体 Student
typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

int main() {
    // 创建结构体数组
    Student students[3] = {
        {"Alice", 20, 3.85},
        {"Bob", 21, 3.60},
        {"Charlie", 19, 3.92}
    };

    // 打印所有学生的信息
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Age: %d\n", students[i].age);
        printf("  GPA: %.2f\n", students[i].gpa);
        printf("\n");
    }

    return 0;
}

/*
✅ 结构体数组的意义：
	•	可以存储一组类似的数据结构（比如一群学生）。
	•	可以轻松地进行批量处理，比如遍历、筛选、排序等。
	•	与指针结合后可以做动态分配、传递函数等高级操作。
*/


typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;


void printStudents(Student s[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", s[i].name);
        printf("  Age: %d\n", s[i].age);
        printf("  GPA: %.2f\n\n", s[i].gpa);
    }
}



int main() {
    Student students[3] = {
        {"Alice", 20, 3.85},
        {"Bob", 21, 3.60},
        {"Charlie", 19, 3.92}
    };

    printStudents(students, 3);  // 把结构体数组传进去
    return 0;
}








