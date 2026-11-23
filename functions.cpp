/*#include<iostream>
using namespace std;

char myfunc(char ch)
{
    if(ch=='z')
    {
        return 'a';
    }
    if(ch=='Z')
    {
        return 'A';
    }
    char result = ch + 1;
    return result;
}
int main()
{
    cout<<myfunc('c')<<endl;
    cout<<myfunc('a')<<endl;
    cout<<myfunc('A')<<endl;
    cout<<myfunc('Z')<<endl;
}
 Learnt that ->  48-57 -> 0 to 9 numeric numbers 
58-64 -> : , ; , < , = , > , ? , @
65-90 -> A to Z 
91-96 -> [ , \, ], ^ , _ , `
97-122 -> a through z 
123-126 -> { , | , } , ~ 


#include<iostream>
using namespace std;
int largest(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c && b>a)
    {
        return b;
    }
    else
    {
        return c;
    }
    
}
int largest2(int a , int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    cout<<largest(9,8,10)<<endl;
    cout<<largest2(100,56,78);
}*/
#include<iostream>
using namespace std;
 int identity(int a, int b)
 {
    int val1 = a*a;
    int val2 = b*b;
    int val3 = 2*a*b;
    int result = val1 + val2 + val3;
    return result;
 }
 int main()
 {
    cout<<identity(2,3)<<endl;
    cout<<identity(4,5)<<endl;

 }

