//
// Created by Alexandro I. Milanez on 8/31/22.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input;
    cout << "Input a number between 1 and 25" << std:endl;
    cin >> input;

    if(input > 25 || input < 1)
    {
        cout << "Wrong Input, Number should be in between 1 and 25" << std: :endl;
        return 0;
    }
}

return 0;