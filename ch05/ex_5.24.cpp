/**
 * Created by Mingyang on 2021/9/18.
 */
#include <iostream>
using namespace std;

int main(){
    int i , j;
    cin >> i >> j;
    if(j==0){
        throw runtime_error("divisor is 0");
    }
    cout << i/j <<endl;
    return 0;
}