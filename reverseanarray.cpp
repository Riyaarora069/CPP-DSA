#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,9,2};
    int size=5;
    int copyArray[5]={};
    for(int i=0;i<size;i++){
        int j=size-i-1;
        copyArray[i]=arr[j];



    }
    for(int i=0;i<size;i++)
    {
        cout<<copyArray[i]<<",";
        
    }
    


    }
