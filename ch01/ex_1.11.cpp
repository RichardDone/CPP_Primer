#include <iostream>

using namespace std;
int main() {
    int num1,num2;
    cin>>num1>>num2;
    if(num1>num2){
        int t = num1;
        num1 = num2;
        num2 = t;
    }
    while(num1<=num2){
        cout<<num1<<" ";
        num1++;
    }
    return 0;
}
