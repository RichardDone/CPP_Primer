/**
 * Created by Mingyang on 2021/9/18.
 */
#include <iostream>
using namespace std;

int main(){
    int i , j;
    cout << "please input tow numbers: " << endl;
    while(cin >> i >> j){
        try{
            if(j==0){
                throw runtime_error("divisor is 0");
            }else{
                cout << i/j <<endl;
            }
        }catch (runtime_error err){
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c=='n'){
                break;
            }
        }
        cout << "please input tow numbers: " << endl;
    }

    return 0;
}
