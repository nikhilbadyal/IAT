#include<iostream>
#define size 5
using namespace std;

int evaluatePloynomial(int * , int , int );
int evaluatePloynomial(int * arr , int degree , int x)
{
    int y = 0;
    for(int i = degree-1 ; i >= 0  ; --i)
    {
        y = arr[i] + x*y;
    }
    return y;
}
int main()
{
    int arr[size] = {9,0,-3,0,9};
    cout<<evaluatePloynomial(arr,5,-2);
    return 0;
}
