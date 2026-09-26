#include<iostream>
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
/* Learnt that ->  48-57 -> 0 to 9 numeric numbers 
58-64 -> : , ; , < , = , > , ? , @
65-90 -> A to Z 
91-96 -> [ , \, ], ^ , _ , `
97-122 -> a through z 
123-126 -> { , | , } , ~ 
*/

