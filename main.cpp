#include <iostream>
#include "swap.h"
using namespace std;

int main(int argc, char **argv)
{
    system("chcp 65001");

    int a = 10, b = 20;

    cout << "数据交换前:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "数据交换后:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    
    return 0;
}
