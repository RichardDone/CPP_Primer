/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>

using namespace std;
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        num[i] = i;
    }
    for(auto &n : num){
        cout<<n<<" ";
    }
    return 0;
}
