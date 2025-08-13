#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
     int pivot=arr[s];
     int cnt=0;
     for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
        cnt++;
     }
      //take piv to its right place
     int pivIdx=s+cnt;
     swap(arr[pivIdx],arr[s]);
      
     int i=s;
     int j=e;

     while(i<pivIdx && j>pivIdx){
         while(arr[i]<= pivot && i<pivIdx ) i++;
         while(arr[j]>pivot && j>pivIdx) j--;

         if(i<pivIdx && j>pivIdx){
            swap(arr[i++],arr[j--]);
         }
     }
     return pivIdx;
}
void quicksort(int *arr,int s,int e){
    //base case
    if(s>=e) return;
    //partition
    int p=partition(arr,s,e);

    //to sort the right oart
    quicksort(arr,s,p-1);

    //to sort the left part 
    quicksort(arr,p+1,e);
}
int main(){

int arr[5]={2,4,8,48,4};

int n=5;

quicksort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}