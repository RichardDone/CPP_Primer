#include <iostream>
using namespace std;

int main() {
    string string1;
    cin >> string1;
    if(!string1.empty()){
        for(auto &s : string1){
            s = 'X';
        }
//        decltype(string1.size()) i=0;
//        while(i<string1.size()){
//            string1[i] = 'X';
//            i++;
//        }
    }
    cout<<string1<<endl;
    return 0;
}
