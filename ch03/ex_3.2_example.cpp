#include <iostream>
using namespace std;
/*
 * 编写一个程序吧0-15的数字转换成十六进制
 */
int main() {
    const string hexdigit = "0123456789ABCDEF"; //可能的十六进制数字
    cout<<"Enter a series of numbers between 0 and 15"
        <<" separated by spaces. Hit ENTER when finished:"<<endl;
    string result; //用于保存16进制字符串
    string::size_type n; //用于保存从输入流读取的数字
    while (cin>>n){
        if(n<hexdigit.size()){
            result += hexdigit[n];
        }
    }
    cout<< "Your hex number is:" << result << endl;
    return 0;
}
