/**
 * Created by Mingyang on 2021/9/18.
 */
#include <iostream>
using namespace std;

int main(){
    string str;
    string prestr;
    while(cin>>str){
        if(prestr == str){
            break;
        }
        prestr = str;
    }

    if (cin.eof())  {
        cout << "no word was repeated." << endl;
    }else{
        cout << str << " occurs twice in succession." << endl;
    }

    return 0;
}