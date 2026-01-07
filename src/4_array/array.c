#include <stdio.h>

int printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("索引: %i, 值: %i\n", i, array[i]);
    }
}

// 变长数组（Variable-length array）
int VariableLengthArray(int size)
{
    // [] 中的元素数量除了使用常量，还可以使用变量
    // 这叫 Variable-length array(变长数组，简称 VLA)
    int array[size];

    return 0;
}

int main()
{
    // 声明格式: 类型 标识符[元素数量];
    //
    // 这里声明了变量名为 demoArray 的数组，数组元素的类型为 int，数组元素的数量为 14
    int demoArray[14];
    // 声明时赋值。按顺序，从左至右依次对 0, 1, 2, ... 号元素赋值。
    // 可以赋值任意数量的元素。没有被赋值的 int 类型的元素会被初始化为 0
    int demoArrayAssignment[14] = {4, 5, 19, 9};
    // 声明时赋值。按索引，针对具体的元素进行赋值
    int demoArrayAssignmentSpecific[14] = {[0] = 4, [2] = 19, [4] = 19};
    // 声明时赋值。混合使用按顺序赋值和按索引赋值
    int demoArrayAssignmentMixed[14] = {4, 5, [2] = 19, 9, [5] = 20};

    // C 语言规定，数组变量一旦声明，就不得修改变量指向的地址
    // 所以下面修改元素的写法是不被允许的
    // demoArrayAssignment = {1, 2, 3, 4, 5};

    // 数组长度。C 的标准库里没有直接获取数组长度的函数，需要通过 sizeof 关键字来获取数组占用的总 Bytes，再除以每个元素占用的 Bytes
    // sizeof(demoArray) 返回数组 demoArray 的占用的内存空间大小，单位是 Bytes
    // sizeof(int) 返回 int 类型的占用的内存空间大小，单位是 Bytes。（int 类型占用 4 Bytes）
    printf("%zd\n", sizeof(demoArray));                         // 56
    printf("数组长度: %zd\n", sizeof(demoArray) / sizeof(int)); // 56 / 4 = 14

    printArray(demoArrayAssignmentSpecific, 14);

    return 0;
}
