#include <iostream>
#include <vector>

using namespace std;
int main() {
    string word;
    vector<string> svec;
    while(cin>>word){
        svec.push_back(word);
    }
    for(auto &str:svec){
        for(auto &s:str){
            s = toupper(s);
        }
    }

    for(auto &s:svec){
        cout<<s<<endl;
    }
    return 0;
}
