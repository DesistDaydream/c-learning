#include <stdio.h>

struct person
{
    char *name;
    char *species;
    int age;
};

void ageChange(struct person *p)
{
    // (*p).age 不能写成 *p.age，因为点运算符 . 的优先级高于 * 。*p.age 这种写法会将 p.age 看成一个指针，然后取它对应的值，会出现无法预料的结果。
    (*p).age = (*p).age + 1;
    // (*p).age 这样的写法很麻烦。C 语言就引入了一个新的箭头运算符 -> ，可以从 struct 指针上直接获取属性，大大增强了代码的可读性。
    p->age = p->age + 1;

    // 假如有 ptr == &myStruct，那么下面三种写法时等价的
    // myStruct.prop == (*ptr).prop == ptr->prop
}

int main()
{
    struct person my = {"DesistDaydream", "human", 18};
    ageChange(&my);
    printf("Age is %i\n", my.age);
    return 0;
}
