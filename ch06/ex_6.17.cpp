/**
 * Created by Mingyang on 2021/11/01.
 */
#include <iostream>
using namespace std;

bool any_capital(const string &str){
    for(auto s: str){
        if(isupper(s)){
            return true;
        }
    }
    return false;
}

void to_lowercase(string &str){
    for(auto &s:str){
        s = tolower(s);
    }
}

int main(){
    string hello("Hello World!");
    cout<< any_capital(hello)<<endl;

    to_lowercase(hello);
    cout<< hello <<endl;
    return 0;
}
