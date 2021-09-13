#include <iostream>
using namespace std;

void linkString(){
    string word;
    string sum;
    while(getline(cin,word)){
        sum+=word;
    }
    cout<<sum<<endl;
}

void splitString(){
    string word;
    string sum;

    while(getline(cin,word)){
        sum+=(word+" ");
    }
    cout<<sum<<endl;
}

int main() {
    linkString();
    splitString();
    return 0;
}
