#include <stdio.h>


/*
int main() {

    // pointer = A variable that stores the memory address of another variable
    //          benefit: They help avoid wasting memory by allowing you to pass
    //          the address of a large data structure instead of copying the entire data.


    //🧠 一、什么是指针（Pointer）？

    // 在 C 语言中，指针就是一个变量，它存储的是另一个变量的内存地址。

    // 简单说：
	     //  •	普通变量存储的是值
	     //  •	指针变量存储的是地址

    // 🔍 二、为什么要用指针？

/*
用途
说明
✅ 操作内存
可以直接访问和修改某个内存地址的数据
✅ 函数参数传递
用于传引用，提高效率，支持修改外部变量
✅ 动态内存分配
搭配 malloc() 使用，实现动态数组
✅ 结构体 / 数组访问
更灵活地操作大型数据结构

*/

// 🧪 三、基本语法

// int a = 10;      // 普通变量
// int* p = &a;     // 定义一个指针变量 p，指向 a 的地址

// printf("%d\n", *p);  // 输出 a 的值：10

// &      取地址符号（address-of）
// *      解引用符号（dereference），访问地址里的值
//int* p  表示“p 是一个指向 int 类型的指针”


/*
    int a = 5;
    int* p = &a;

    printf("a 的地址是：%p\n", &a);
    printf("p 储存的地址是：%p\n", p);
    printf("通过 *p 访问到的值是：%d\n", *p);

    *p = 100;  // 修改 a 的值
    printf("a 被修改成：%d\n", a);

    return 0;
}
*/



void addTen(int* num) {
    *num += 10;  // 改变传入的变量
}

int main() {
    int a = 20;
    addTen(&a);
    printf("a + 10 = %d\n", a);  // 输出 30
    return 0;
}



