/*#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,4,7};
    int size=6;
    int target=40;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"The target element"<<" " <<target << " is at index"<<" " <<i<<endl;
            break;
        }
        
        
    }
    cout<<"Target element may be at index -1"<<endl;//if element is not found at any index then -1 needs to be returned.. 
}


#include<iostream>
using namespace std;

    int linearSearch(int arr[],int size,int key){
        for(int i=0;i<size;i++)
        {
            if(arr[i]==key){
                return i;
                break;
            }


        }
        return -1;

    }
    int main(){
        int nums[]={2,4,6,8,10,12,14};
        int size=7;
        int key=100;
        int result=linearSearch(nums,size,key);
        cout<<"Target element is at index" <<" " <<result;*/
        
}