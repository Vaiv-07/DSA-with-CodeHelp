#include <iostream>

using namespace std;

int setBits(int n)
{
    int bit, count = 0;
    while (n != 0)
    {
        bit = n & 1;
        n = n >> 1;
        if (bit != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << setBits(n1) + setBits(n2);

    return 0;
}
