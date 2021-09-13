/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string s1("aaaaaaaa"),s2("bbbbbbbb");
    if(s1==s2){
        cout<<"The same string"<<endl;
    }else if(s1>s2){
        cout<<s1<<" > "<<s2<<endl;
    }else{
        cout<<s1<<" < "<<s2<<endl;
    }

    cout<<"============"<<endl;

    const char *cs1 = "aaaaaa";
    const char *cs2 = "bbbbbb";

    auto result = strcmp(cs1,cs2);
    if(result==0){
        cout<<"The same string"<<endl;
    }else if(result>0){
        cout<<"aaaaaa > bbbbbb"<<endl;
    }else{
        cout<<"aaaaaa < bbbbbb"<<endl;
    }

    return 0;
}