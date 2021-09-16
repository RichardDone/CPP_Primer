/**
 * Created by Mingyang on 2021/9/16.
 */
#include <iostream>
using namespace std;

int main(){
    pair<string, int> max_duplicated;
    int count = 0;
    for(string str, prestr; cin>>str; prestr=str){
        if(str == prestr){
            ++count;
        }else{
            count = 0;
        }
        if(count > max_duplicated.second){
            max_duplicated = {prestr , count};
        }
    }

    if(max_duplicated.first.empty()){
        cout << "There is no duplicated string." <<endl;
    }else{
        cout << "the word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times." <<endl;
    }
    return 0;
}