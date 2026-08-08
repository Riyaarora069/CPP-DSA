#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    return print(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    cout<<"Here's the pattern from "<<n<<" "<<" to 1"<<endl;

    print(n);
}