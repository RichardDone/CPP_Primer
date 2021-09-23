/**
 * Created by Mingyang on 2021/9/23.
 */
#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int t = *p;
    *p = *q;
    *q = t;
}

int main(){
    for (int lft, rht; cout << "Please Enter:\n", cin >> lft >> rht;)
    {
        swap(&lft, &rht);
        cout << lft << " " << rht << endl;
    }
    return 0;
}
