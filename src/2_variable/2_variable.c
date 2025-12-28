#include <stdio.h>

void main()
{
    // 声明一个变量
    // 格式: TYPE VarID [= EXP], VarID2 [= EXP2], ...;
    // TYPE 是数据类型
    // VarID 是变量标识符。可以是一个或多个变量标识符，多个时使用逗号分隔
    // = EXP 是初始化变量的表达式，i.e. VarID 进行赋值。这部分是可选的，声明时不赋值的话，编译时会自动初始化
    int demo_var;

    printf("%d\n", demo_var);
}
