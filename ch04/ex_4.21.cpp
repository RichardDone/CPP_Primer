/**
 * Created by Administrator on 2021/9/14.
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for(auto &v:ivec){
        cout<< ((v&0x1) ? v*2: v)<<" ";
    }

    return 0;
}
