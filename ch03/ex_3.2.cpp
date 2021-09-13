#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

void readByLine(){
    string line;

    while(getline(cin,line)){
        cout<<line<<endl;
    }
}

void readByWord(){
    string word;

    while(cin>>word){
        cout<<word<<endl;
    }
}