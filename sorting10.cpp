#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
const int d = 5;
int basis[d]; // basis[i] keeps the mask of the vector whose f value is i

int sz; // Current size of the basis

void insertVector(int mask)
{
    for (int i = 0; i < d; i++)
    {
        if ((mask & 1 << i) == 0)
            continue; // continue if i != f(mask)

        if (!basis[i])
        { // If there is no basis vector with the i'th bit set, then insert this vector into the basis
            basis[i] = mask;
            ++sz;

            return;
        }

        mask ^= basis[i]; // Otherwise subtract the basis vector from this vector
    }
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        scanf("%d", &a);

        insertVector(a);
    }

    cout << (1 << sz) << endl;

    return 0;
}