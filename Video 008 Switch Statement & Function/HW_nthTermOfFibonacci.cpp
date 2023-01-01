#include <iostream>

using namespace std;

int nthTermOfFibo(int n)
{
    int ans, a = 0, b = 1, c;
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << nthTermOfFibo(n);

    return 0;
}
