/**
 *  Created by Mingyang on 2021/9/13.
 */
#include <iostream>
#include <cstring>
using namespace std;

const char cstr1[] = "Hello";
const char cstr2[] = "World";

int main(){

    char result[100];
    strcpy(result,cstr1);
    strcat(result," ");
    strcat(result,cstr2);
    cout<<result<<endl;
    return 0;
}