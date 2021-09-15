/**
 * Created by Mingyang on 2021/9/15.
 */
#include <iostream>
using namespace std;
int main(){
    int x[10]; int *p = x;
    cout<< sizeof(x) << " " << sizeof(*x) <<endl; // 40 4
    cout<< sizeof(x) / sizeof(*x) <<endl; //10; sizeof(x) = 10*4, sizeof(*x) = 4;

    cout<<"=================================";

    cout<< sizeof(p) << " " << sizeof(*p) <<endl; // 8 4
    cout<< sizeof(p) / sizeof(*p) <<endl; //2 sizeof(p)的含义：p是一个int *类型，因此得出的大小应该是指针的大小
                                            // sizeof(*p)的含义：*p已经对p解引用了，*p实际就是int类型，因此sizeof(*p)得到的是一个int型的大小。
    return 0;
}

