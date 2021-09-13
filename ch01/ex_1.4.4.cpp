#include <iostream>
using namespace std;
int main() {
    // if语句 计算输入的数字分别出现的次数；
    // currval 是我们正在统计的数字，我们读入的新数字是存入val
    int currval = 0 , val = 0;
    // 读取第一个数字
    if(cin>>currval){
        int cnt = 1; //保存正在处理的当前数的个数
        while(cin>>val){ //读取剩余的数字
            if(currval == val) { //如果值相同
                cnt++;           // cnt加一
            }else{
                //如果值不同，打印出之前计数的值和出现次数
                cout<<currval<<" occur "<<cnt<<" times "<<endl;
                //重新记值
                currval = val;
                //重新计数
                cnt = 1;
            }
        } //while循环在这里结束
        // 记住打印文件组后一个数值
        cout<<currval<<" occur "<<cnt<<" times "<<endl;
    } //if在这里结束
    return 0;
}
