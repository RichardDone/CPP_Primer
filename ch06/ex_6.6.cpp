/**
 * Created by Mingyang on 2021/9/23.
 */
#include <iostream>
using namespace std;

int count(int n){   //n是形参
    static int ctr = 0; //ctr是局部静态变量
    ctr+=n;
    return ctr;
}

int main(){
    for(int i = 0;i!=10;++i){ //i是局部变量
        cout<< count(i) <<endl;
    }
    return 0;
}