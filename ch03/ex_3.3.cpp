#include <iostream>
using namespace std;

void compareString(){
    string s1,s2;

    cin>>s1>>s2;

    if(s1 == s2){
        cout<<"equal"<<endl;
    }else{
        if(s1>s2){
            cout<<s1<<endl;
        }else{
            cout<<s2<<endl;
        }
    }
}

void compareSize(){
    string s1,s2;

    cin>>s1>>s2;
    if(s1.size() == s2.size()){
        cout<<"equal"<<endl;
    }else if(s1.size()>s2.size()){
        cout<<s1<<endl;
    }else{
        cout<<s2<<endl;
    }
}

int main() {
    compareString();
    compareSize();
    return 0;
}