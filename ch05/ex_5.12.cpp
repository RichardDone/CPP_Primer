/**
 * Created by Mingyang on 2021/9/16.
 */
#include <iostream>
using namespace std;

int main(){
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch,prech = '\0';
    while (cin >> noskipws >> ch) {
        switch (ch) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
                if(prech == 'f') ++fiCnt;
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newLineCnt;
                break;
            case 'f':
                if(prech == 'f') ++ffCnt;
                break;
            case 'l':
                if(prech == 'f') ++flCnt;
                break;
        }
        prech = ch;
    }
    cout << "Number of vowel a(A): \t" << aCnt << endl;
    cout << "Number of vowel e(E): \t" << eCnt << endl;
    cout << "Number of vowel i(I): \t" << iCnt << endl;
    cout << "Number of vowel o(O): \t" << oCnt << endl;
    cout << "Number of vowel u(U): \t" << uCnt << endl;
    cout << "Number of space: \t" << spaceCnt << endl;
    cout << "Number of tab char: \t" << tabCnt << endl;
    cout << "Number of new line: \t" << newLineCnt << endl;
    cout << "Number of ff: \t" << ffCnt << endl;
    cout << "Number of fl: \t" << flCnt << endl;
    cout << "Number of fi: \t" << fiCnt << endl;

    return 0;
}
