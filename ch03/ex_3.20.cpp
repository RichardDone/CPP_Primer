#include <iostream>
#include <vector>
using namespace std;

// 输入一组数，相邻整数相加
void test1(){
    int num;
    vector<int> ivec;
    vector<int> sum;
    while(cin>>num){
        ivec.push_back(num);
    }

    for(vector<int>::size_type i=0;i<ivec.size()-1;i+=2){
        sum.push_back(ivec[i]+ivec[i+1]);
    }

    for(auto &s:sum){
        cout<<s<<" ";
    }
}

// 改写程序，要求首尾依次相加
void test2(){
    int num;
    vector<int> ivec;
    vector<int> sum;
    while(cin>>num){
        ivec.push_back(num);
    }

    vector<int>::size_type len = ivec.size();
    //如果有奇数个数字，中间的数字会自己相加一遍
    int tem;
    for(vector<int>::size_type i=0;i<(len+1)/2;i++){
        tem = ivec[i]+ivec[len-1-i];
        cout<<"i="<<i<<" tem="<<tem<<endl;
        sum.push_back(tem);
    }

    for(auto &s:sum){
        cout<<s<<" ";
    }
}

int main() {
    test1();
//    test2();
    return 0;
}
