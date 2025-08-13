#include<iostream>
using namespace std;
void sort(int *arr,int n){
    if(n==0 || n==1) return;//base case
    for(int i=0;i<n-1;i++){// first case solve kar do baki recursion dekh lega........
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);

    }
    sort(arr,n-1);//recusive call


}
int main(){
    int arr[5]={2,4,8,48,4};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;

    }
}