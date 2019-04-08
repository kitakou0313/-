#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, E;
    int list[5] = {0};

    int max = 0, maxInd = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> list[i];
        if (list[i] % 10 != 0)
        {
            if (max < 10 - list[i] % 10)
            {
                max = 10 - list[i] % 10;
                maxInd = i;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        if (i != maxInd)
        {
            if(list[i]%10 != 0) ans += list[i] + (10 - list[i] % 10);
            else ans += list[i];
        }
    }
    cout <<ans + list[maxInd] <<endl;

    return 0;
}