/*Write a function power() which raise a number m to a power n. The function takes double value of m and integer value of 
n and return the result. Use a default value of n is 2 to make the function to calculate squares when this argument is 
ommited.*/

#include<iostream>
using namespace std;

class math { 
    public:
    int power(int m, int n)
    {
        int i, ans= 1;
        for (i=1; i<=n; i++)
        {
            ans = ans*m;
        }
        return ans;
    }};

    int main ()
    {
        int result =0;
        math p;
        result = p.power(3,2);
        cout << result;
        return 0;
    }