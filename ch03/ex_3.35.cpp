/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
using namespace std;

int main(){
    int a[10] = {1, 3, 0, 9, 7, 5, 4, 11, 12, 15};
    int *begin = std::begin(a);
    int *end = std::end(a);
    while(begin!=end){
        *begin = 0;
        begin++;
    }
    for(auto &t:a){
        cout<<t<<" ";
    }
    return 0;
}