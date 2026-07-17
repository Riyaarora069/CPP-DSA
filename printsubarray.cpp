#include<iostream>
using namespace std;
void printsubarray(int arr[],int size){
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
        cout<<"["<<start<<","<<" "<<end<<"]";

    }
    cout<<endl;
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarray(arr,n);
}