/**
 * Created by Mingyang on 2021/9/23.
 */
#include <iostream>
using namespace std;

int abs(int val){
    return val>0 ? val:-val;
}

int main(){
    cout<<abs(-5)<<endl;
    return 0;
}