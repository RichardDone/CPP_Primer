#include <iostream>
#include <vector>
using namespace std;
int main() {
    string word;
    vector<string> svec;
    while(cin>>word){
        svec.push_back(word);
    }

    vector<string>::iterator iter;
    for(iter=svec.begin();iter!=svec.end();iter++){
        cout<<*iter<<endl;
    }
    return 0;
}
