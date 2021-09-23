/**
 * Created by Mingyang on 2021/9/23.
 */
#include <iostream>
using namespace std;

int fact3(int val){
    int ret = 1;
    while(val>1){
        ret *= val--;
    }
    return ret;
}

int main(){
    cout<<fact3(5)<<endl;
    return 0;
}