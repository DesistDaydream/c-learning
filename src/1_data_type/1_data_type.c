#include <stdio.h>
#include <string.h>

// 字符串类型
int typeString()
{
    // C 语言没有字符串类型，字符串是 char 类型的数组
    char demoString[20] = "DesistDaydream";
    printf("%s\n", demoString);

    // 字符串的长度
    printf("%zd\n", strlen(demoString));

    // 字符串的拷贝。字符串不能使用 = 运算符进行赋值
    char copyString[20];
    strcpy(copyString, demoString);
    printf("%s\n", copyString);

    // 字符串数组。一个数组若是想保存字符串，则需要使用二维数组
    // 每个元素都是 char 类型的数组，每个 char 类型的数组都可以保存一个字符串
    char stringArray[3][20] = {"DesistDaydream", "C Language", "Programming"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", stringArray[i]);
    }
    // 更好的写法是使用指针数组
    char *stringPointerArray[3] = {"DesistDaydream", "C Language", "Programming"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", stringPointerArray[i]);
    }

    return 0;
}

int main()
{
    typeString();
    return 0;
}
