/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
using namespace std;
// 使用类型别名来代替循环控制变量的类型
int main(){
    int ia[3][4] = {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
    };

    using int_array = int[4];

    //range for
    for(int_array &row:ia){
        for(int &col:row){
            cout<<col<<" ";
        }
    }
    cout<<endl;

    // for loop
    for(size_t i =0;i!=3;i++){
        for(size_t j=0;j!=4;j++){
            cout<<ia[i][j]<<" ";
        }
    }
    cout<<endl;

    //using pointer
    for(int_array *row = ia; row != ia+3; row++){
        for(int *col = *row; col!=*row+4;col++){
            cout<<*col<<" ";
        }
    }
    cout<<endl;
    return 0;
}