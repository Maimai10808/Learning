#include <stdio.h>


// 37. read A FILE


int main() {

    FILE *pFile = fopen("input.txt", "r");

    char buffer[100] = {0};
    // 	•	声明一个 char 数组（字符串缓冲区），长度为 100 字节，用于接收每一行读取的内容。

    // 初始化为全 0，确保初始内容为空。


    if(pFile == NULL) {
        printf("Could not open file \n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    // •	fgets()：从文件中读取一行内容（最多 99 个字符，加上末尾的 \0）。
	// •	每次从文件中读取一行存入 buffer。
	// •	如果读取成功，就打印出来。
	// •	当读到文件末尾，fgets() 返回 NULL，循环结束。


    fclose(pFile);

    return 0;
}



