#include <stdio.h>

// 36. WRITE A FILE


int main() {

    // WRITE A FILE

    FILE *pFile = fopen("output.txt", "w");

    // 	•	fopen(...)：打开或创建一个文件

    // •	"w"：以写入模式打开文件（write mode）：
	// •	如果文件已存在，它会被清空。
	// •	如果文件不存在，它会被创建。

    char text[] = "Hello, I Love You.";


    if(pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    fclose(pFile);


    return 0;
}
