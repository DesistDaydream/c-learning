// 引入标准库 I/O。该库包含用于输入/输出操作的函数。
#include <stdio.h>

// 主函数。
// - main 表示程序从这里开始执行;
// - int 表示程序返回一个整数
int main()
{
  // printf 函数是 C 标准库（stdio.h）中的一个函数。
  // 它用于将格式化的输出打印到标准输出（通常是终端）。
  printf("Hello World\n");

  // 程序执行到这里结束，并返回一个整数，通常来说
  // - 返回 0 值表示程序正常结束
  // - 返回其他非 0 值表示程序异常结束
  // 可以省略改行代码，编译器会自动填充 `return 0;` 作为程序的最后一行
  return 0;
}

// 使用 gcc hello_world.c 命令，进行编译，
// 生成 a.out 文件（assembler output 的缩写）

// 题外话
// 下面这些 main() 的写法在某种意义上来说都是正确的，因为在不同的标准下编译都是可以通过的
// main()
// main(void)
// main(int argc,char *argv[])
// main(int argc,char **argv)
// void main()
// void main(void)
// void main(int argc,char *argv[])
// void main(int argc,char **argv)
// int main()
// int main(void)
// int main(int argc,char *argv[])
// int main(int argc,char **argv)