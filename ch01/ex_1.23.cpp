#include <iostream>
#include "Sales_item.h"

using namespace std;
int main() {
    Sales_item currItem, valItem;
    if(cin>>currItem){
        int cnt = 1;
        while(cin>>valItem){
            if(currItem==valItem){
                cnt++;
            }else{
                cout<<currItem<<" occur "<<cnt<<" times "<<endl;
                cnt=1;
                currItem = valItem;
            }
        }
        cout<<currItem<<" occur "<<cnt<<" times "<<endl;
    }
    return 0;
}
