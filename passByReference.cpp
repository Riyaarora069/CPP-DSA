#include<iostream>
using namespace std;
    void changeArray(int arr[],int size){
        for(int i=0;i<size;i++){
            arr[i]=2*arr[i];
        }

    }
    int main(){
    int arr[3]={2,3,4};
    int size=3;
    changeArray(arr, size);
    for(int i=0;i<size;i++)
    {
        cout<<&arr[i];
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}