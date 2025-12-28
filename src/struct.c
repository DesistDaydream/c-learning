#include <stdio.h>
#include <string.h>

// 定义一个新的 struct 类型，名为 DemoStudent。一共有 3 个属性：id、name、age
struct DemoStudent
{
    int id;
    char name[20];
    int age;
};

void main()
{
    // 声明 DemoStudent 类型的变量 demo_student
    // 格式: struct TypeName VarID;
    struct DemoStudent demo_student;

    // 为 demo_student 赋值
    demo_student.id = 1001;
    strcpy(demo_student.name, "DesistDaydream");
    demo_student.age = 18;

    // 打印 demo_student 的属性值
    printf("id: %d, name: %s, age: %d\n", demo_student.id, demo_student.name, demo_student.age);

    return 23;
}
