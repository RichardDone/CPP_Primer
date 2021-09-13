/**
 * Created by Mingyang on 2021/9/13.
 */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<unsigned> scores(11,0);
    unsigned grade;
    auto iter = scores.begin();
    int n=0;
    while(cin>>grade){
        if(grade>100){
            cout<<"Wrong Grade!"<<endl;
            continue;
        }
        n = grade/10;
        iter += n;
        (*iter)++;
        iter = scores.begin();
    }

    cout<<"score are :";
    for(auto &s :scores){
        cout<<s<<" ";
    }
    return 0;
}
