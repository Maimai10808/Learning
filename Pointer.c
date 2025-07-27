#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("a 的值是: %d\n", a);        // 5
    printf("a 的地址是: %p\n", &a);     // 比如 0x7ffee32c4abc
    printf("p 的值是: %p\n", p);        // 同样是 0x7ffee32c4abc
    printf("*p 的值是: %d\n", *p);      // 5
    return 0;
}
