/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
#include <vector>
using namespace std;

void copyByVector(){
    vector<int> vec(10);
    for(int i=0;i<vec.size();i++){
        vec[i] = i;
    }
    for(auto &n : vec){
        cout<<n<<"---";
    }
    cout<<endl;
    //通过vector拷贝
    vector<int> vec1(vec);
    for(auto &v:vec1){
        cout<<v<<"...";
    }
}

int main(){
    int num[10];
    for(int i=0;i<10;i++){
        num[i] = i;
    }
    for(auto &n : num){
        cout<<n<<"--";
    }
    cout<<endl;
    // 用数组拷贝
    int copy[10];
    memcpy(&copy,&num,sizeof(copy));
    for(auto &k: copy){
        cout<<k<<"..";
    }
    cout<<endl;
    copyByVector();
}

