/**
 * Created by Mingyang on 2021/9/14.
 */
#include <iostream>

using namespace std;
int main(){
    unsigned grade;
    while(cin>>grade){
        auto result = (grade>90) ? "high pass": (grade>75) ? "pass" : (grade >60) ? "low pass" : "fail";
        cout<<result<<endl;

        // -----------------------
        if(grade>90) cout<<"high pass";
        else if(grade <60) cout<<"fail";
        else if(grade <75) cout<<"low pass";
        else cout<<"pass";
        cout<<endl;
    }
    return 0;
}