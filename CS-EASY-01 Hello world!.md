# CS-EASY-01 Hello world!

### Q1.高级计算机语言与低级计算机语言，各有什么优劣，你更喜欢哪一类计算机语言？

1. 高级计算机语言

优点：

- 接近于自然语言，更符合人类直觉，相比之下具有良好的可读性
- 语法简洁凝练，具有高抽象性，因此能大幅提升开发者的工作效率
- 使用门槛更低，学习难度更低

缺点：

- 执行速度慢（？）
- **无法直观地揭示计算机底层代码的运行过程**



2. 低级计算机语言（这里指机器语言与汇编语言）

优点：

- 能够直接对硬件进行更精确的操作，比如分配内存之类的，可能更有利于系统级编程
- 执行速度快



缺点：

- 可读性差
- 学习较为困难



3. 解释型语言和编译型语言

**有的观点认为**，解释型语言**相对**编译型语言是*「高级语言」*

也许这种观点是认为像 Python Java 这种语言相比 C/C++ 抽象层更高，封装更高，库更丰富吧（？）

但我觉得最二者最重要的的区别还是**应用场景**，C/C++的应用更偏向操作系统和算法，而网站开发等一些应用层面主要用的就是解释型语言



____



就我个人而言，肯定是更喜欢高级计算机语言（这里不区分解释型语言和编译型语言）**简洁**而又**符合直觉**的语法，使用这样的语言可以更简单地实现更为复杂的功能，但是事实上使用高级还是低级语言应该也还是取决于具体的情景

而如果像上面那样具体到 Python 和 C/C++ 的区别，我个人还是更喜欢后者，因为我反而不太喜欢语法非常简单的语言，总感觉缺了点什么（）



**总而言之，我认为，从低级计算机语言到高级计算机语言的转变是编程语言发展转变的一个很自然的过程，在这个过程中，语言所对应的指令抽象层级不断提高，使得人们对于计算机的认识可以向更高维度迈进，实现更多维度的创造，而如果没有高级语言的发明，也许无异于纯粹拿一车晶体管去造一个CPU吧**





### Q2.尝试解读 `hello.c` 中每一行的内容。

```c
#include <stdio.h>

int main() {
    printf("Hello, world!");
    return 0;
}
```



- 第一行：头文件

首先 `#include` 是一条预处理器指令，可以进行**头文件**的引用，类似复制粘贴一样，将所引用文件的内容输入进当前行

而 `stdio.h` 就是所引用的头文件，即**「标准输入输出头文件」**，来自于C的编译器，之所以要引用它，是因为它包含了输入和输出函数，不调用它，编译器就无法识别代码中的这些函数

- 第二行：主函数

`mian()` 函数是C中第一个被调用的函数，是整个程序的入口，也被称为「主函数」，在主函数中书写的部分通常就是整个程序的主体。还有一点就是**花括号**，C的函数用其表示函数体的开始和结束

- 第三行：输出语句

前面所说的头文件中的输出函数就是 `printf` ，有时候也称之为「格式化输出」，不过在这里并没有展示这个功能。括号中的 `"Hello, world!"` 是一个**字符串**，是给这个函数传入的**参数**，而函数的只能就是把这个字符串打印在控制台上

- 第四行：返回语句（程序的结束）

`return 0;` 语句是主函数的返回语句，任何有返回值的函数都要求有一条返回语句，而正如 `int main()` 所定义的那样，主函数应当返回一个整型值，一般用 `0` 。而返回 `0` 表示程序**正常退出**，没有异常。程序运行结束后，在控制台上也可能看到返回了非零值，说明程序**异常退出**了





### Q3.删去该程序的哪一行不会影响运行结果？

`return 0;`

因为编译器会自动补上，正常退出的话会自动返回 `0`





### Q4.int类型是计算机存储什么元素的方式？为什么main函数要使用int进行声明/定义？

`int` 是整型，用来表示有符号的整数，一般是32位的二进制数，取值范围在 $-2^{31}$ 到 $2^{31}-1$ 之间



为什么主函数要用 `int` 声明？

我猜这是C语言的标准吧，或者一种惯例（？）

而且返回整型的话相比其他类型更加简单，操作系统更容易判断程序是否异常

而且，就算设置其他的返回类型，也会在程序结束的时候转回 `int` 类型吧（？）





### Q5.请调整上述程序的内容，使其输出内容改为 `Hello glimmer!` 并附上运行截图



![hello glimmer.png](https://s2.loli.net/2024/09/20/WOgyAFBSJU1Tlz3.png)

