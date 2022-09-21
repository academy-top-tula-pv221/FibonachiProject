#include <iostream>

using namespace std;

long long FibLoop(int n)
{
    long long f1 = 0;
    long long f2 = 1;
    for (int i = 1; i < n; i++)
    {
        long long f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f2;
}

long long FibReq(int n)
{
    if (n == 0 || n == 1) return n;
    
    static int fib[1000]{};
    if(fib[n] == 0)
        fib[n] = FibReq(n - 1) + FibReq(n - 2);
    return fib[n];
}

int main()
{
    cout << FibLoop(100);
}
