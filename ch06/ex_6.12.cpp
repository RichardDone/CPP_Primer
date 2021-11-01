/**
 * Created by Mingyang on 2021/11/01.
 */
#include <iostream>
using namespace std;

void swap(int& lhs, int& rhs)
{
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main()
{
    for (int left, right; std::cout << "Please Enter:\n", std::cin >> left >> right;)
    {
        swap(left, right);
        cout << left << " " << right << endl;
    }

    return 0;
}