#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,5,80,1,7,6};
    int size=7;
    int target=8;
    bool flag=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            
            cout<<"Target element is found at " << i << " index" << endl;
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        cout<<"Target element "<<target<< " is not found in the given array."<<endl;
    }


}