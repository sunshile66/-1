/*
函数的分文件编写一般有四个步骤：
1. 创建一个.h头文件
2. 在.h文件中编写函数的原型（声明）
3. 创建一个.cpp源文件
4. 在.cpp文件中定义.h文件中的函数

*/
#include <iostream>
using namespace std;
#include "swap.h"
//函数的分文件编写
//实现两个数值进行交换的函数


int main() {
    int a = 10;
    int b = 20;
    swap(a, b);
}