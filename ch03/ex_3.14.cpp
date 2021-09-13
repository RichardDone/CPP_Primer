#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    int num;
    while(cin>>num){
        vec.push_back(num);
    }
    vector<int>::iterator iter;
    for(iter=vec.begin();iter!=vec.end();iter ++){
        cout<<*iter<<" ";
    }
    return 0;
}
