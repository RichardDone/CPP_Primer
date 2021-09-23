/**
 * Created by Mingyang on 2021/9/23.
 */
#include <iostream>
using namespace std;

int fact4(int val){
    int ret = 1;
    while(val>1){
        ret *= val--;
    }
    return ret;
}

void interactive_fact()
{
    string const prompt = "Enter a number within [1, 13) :\n";
    string const out_of_range = "Out of range, please try again.\n";
    for (int i; cout << prompt, cin >> i;)
    {
        if (i < 1 || i > 12)
        {
            cout << out_of_range;
            continue;
        }
        cout << fact4(i) << std::endl;
    }
}


int main(){
    interactive_fact();
    return 0;
}