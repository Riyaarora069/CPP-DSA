#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,4,7};
    int size=6;
    int target=4;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"The target element"<<" " <<target << " is at index"<<" " <<i<<endl;
            break;
        }
        
    }
}