#include "swap.h"

//函数的定义
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "交换后的a的值为：" << a << endl;

    cout << "交换后的b的值为：" << b << endl;
}