#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n* fact(n-1);
}
int main()
{
    int result=fact(13);
    cout<<"Factorial of 13:"<<result<<endl;
}
