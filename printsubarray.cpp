#include<iostream>
#include<climits>
using namespace std;
void printsubarray(int arr[],int size){
    int sum=0;
    int maxsum=INT_MIN;
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
        //cout<<"["<<start<<","<<" "<<end<<"]";
        int sum=0;
        
        for(int i=start;i<=end;i++){
            //cout<<arr[i];
            sum=sum+arr[i];
            
        
        


        }
        cout<<sum<<",";
        maxsum=max(sum,maxsum);

        

    }
    cout<<endl;
}
cout<<"The maximum sum of subarray ="<<maxsum<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarray(arr,n);
    
}