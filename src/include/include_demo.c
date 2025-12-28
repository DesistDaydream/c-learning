#include <stdio.h>
// 头文件，一种避免多次书写函数原型声明的方式。只要头文件中定义了 add() 函数，其他文件中就可以直接调用 add() 函数
// 使用自定义的头文件时，需要使用 -I 选项指定头文件的搜索路径 `gcc -I ./include/demo/ ./src/include/*.c`。否则只会在 .c 文件所在路径搜索头文件
#include "include_demo.h"

// 函数原型声明
// 若没有该函数的原型声明，部分编译器编译时会产生警告: warning: implicit declaration of function 'add' [-Wimplicit-function-declaration]
// 只是产生警告，依然可以编译成功
// int add(int x, int y);

int main()
{
    // 调用 add() 函数
    // 想要调用其他文件中的函数，编译时需要在命令行中指定该文件，可以像这样 gcc ./src/include/*.c 使用通配符
    int result = add(1, 2);
    printf("%d\n", result);
    return 0;
}

// 哪怕在同一个文件中，如果 add() 函数写在 main() 函数后面，也会有警告: warning: implicit declaration of function 'add'
// 除非 add() 写在 main() 函数之前
// 这是因为为了节省内存，不会保存各种自我描述的符号信息，调用的时候要想知道 add() 函数的存在，必须保证 add() 在 main() 之前就定义了