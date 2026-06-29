#include<iostream>
using namespace std;
int main()
{
    int nums[]={10,20,45};
    int size=3;
    int smallest=INT8_MAX;
for(int i=0; i<size; i++)
{ 
    if(nums[i]<smallest)
    {
        smallest=nums[i];

    }

}
cout<<"Smallest="<<smallest<<endl;

}