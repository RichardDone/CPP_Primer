#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> integer(10,2);

    vector<int>::iterator iterator;
    for(iterator = integer.begin();iterator!=integer.end();iterator++){
        *iterator *=2;
    }

    for(auto &item:integer){
        cout<<item<<" ";
    }
    cout<<endl;
    return 0;
}
