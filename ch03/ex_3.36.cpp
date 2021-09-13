/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
#include <vector>
using namespace std;

bool compareArray(int *const pb1, int *const pe1, int *const pb2,int *const pe2){

    if((pe1-pb1) != (pe2-pb2)){
        return false;
    }else{
        int *i = pb1;
        int *j = pb2;
        while(i!= pe1){
            if(*i != *j){
                return false;
            }
            i++; j++;
        }
        return true;
    }
}

int main(){
    int arr1[3] = {0,1,2};
    int arr2[3] = {0,2,4};
    if(compareArray(begin(arr1), end(arr1), begin(arr2), end(arr2))){
        cout<<"Two arrays are equal"<<endl;
    }else{
        cout<<"Two arrays are not equal"<<endl;
    }

    cout<<"==========="<<endl;

    vector<int> vec1 = {0,1,2};
    vector<int> vec2 = {0,2,4};

    if(vec1 == vec2){
        cout<<"Two vectors are equal"<<endl;
    }else{
        cout<<"Two vectors are not equal"<<endl;
    }
    return 0;
}