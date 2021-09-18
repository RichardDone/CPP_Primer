/**
 * Created by Mingyang on 2021/9/18.
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    string prestr;
    bool no_twice = true;
    while(cin>>str){
        if(prestr == str && isupper(prestr[0])){
            cout << str << " occurs twice in succession." << endl;
            no_twice = false;
            break;
        }
        prestr = str;
    }

    if (no_twice)  {
        cout << "no word was repeated." << endl;
    }
    return 0;
}