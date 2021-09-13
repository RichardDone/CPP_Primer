#include <iostream>
using namespace std;
int main() {
    // 打印50-100的整数相加
    int i=50;
    int res = 0;
    while(i<=100){
        res+=i;
        i++;
    }
    cout<<res<<endl;
    return 0;
}
