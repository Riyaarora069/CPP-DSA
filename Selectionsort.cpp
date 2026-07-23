#include<iostream>
using namespace std;
void Printarray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int minidx=i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minidx]){
            minidx=j;
        }

       }
       swap(arr[i],arr[minidx]);

    }

}
int main(){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    Selectionsort(arr,n);
    Printarray(arr,n);

}