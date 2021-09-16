/**
 * Created by Mingyang on 2021/9/16.
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> scores = {"F" , "D" , "C" , "B" , "A" , "A++"};
    for(int g;cin>>g;){
        string letter;
        if(g<60){
            letter = scores[0];
        }else{
            letter = scores[(g-50)/10];
            if(g!=100){
                if(g%10 > 7){
                    letter += "+";
                }else if(g % 10 < 3){
                    letter +="-";
                }
            }
        }
        cout<<letter<<endl;
    }
    return 0;
}
