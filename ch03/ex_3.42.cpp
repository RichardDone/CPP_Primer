/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    int num[vec.size()];
    for(int i=0;i!=vec.size();i++){
        num[i]=vec[i];
    }

    for(auto &n : num){
        cout<<n<<" ";
    }
    return 0;
}