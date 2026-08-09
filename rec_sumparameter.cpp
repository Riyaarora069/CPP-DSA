#include<iostream>
using namespace std;
void sum(int n, int s, int x)
{
    if(n>x)
    {
        cout<<"Sum:"<<s<<endl;
        return;
    }
    sum(n+1 , s+n, x);
    return ; 
}
int main()
{
    int x;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    sum(1,0,x);
}