#include <iostream>
/*
 * 去除字符串中的标点符号
 */
using namespace std;
int main() {
    const string str = "0123&*sjaa,.?70!";
    string result;
    if(!str.empty()){
        for(auto &s:str){
            if(!ispunct(s)){
                result+=s;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
