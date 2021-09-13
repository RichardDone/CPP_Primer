/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
using namespace std;
//使用auto关键字

int main(){
    int ia[3][4] = {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
    };

    //range for
    for(auto &row: ia){
        for(auto col:row){
            cout<<col<<" ";
        }
    }
    cout<<endl;

    //for loop
    for(auto i = 0;i != 3; i++){
        for(auto j = 0;j != 4; j++){
            cout<<ia[i][j]<<" ";
        }
    }
    cout<<endl;

    //using pointer
    for(auto row = ia; row != ia+3; row++){
        for(auto col = *row; col != *row + 4; col++){
            cout<<*col<<" ";
        }
    }
    cout<<endl;
    return 0;
}
