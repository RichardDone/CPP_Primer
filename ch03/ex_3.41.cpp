/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num[] = {1,2,3,4,5};
    vector<int> vec(begin(num), end(num));
    for(auto &v:vec){
        cout<<v<<" ";
    }
    return 0;
}