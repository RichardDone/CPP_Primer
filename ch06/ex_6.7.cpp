/**
 * Created by Mingyang on 2021/9/23.
 */
#include <iostream>
using namespace std;

int generate(){
    static int ctr = 0;
    return ctr++;
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        generate();
        --n;
    }
    return 0;
}
