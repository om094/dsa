#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
int mid=s+(e-s)/2;

int len1=mid-s+1;
int len2=e-mid;
int *first = new int[len1];
int *second= new int[len2];

int k=s;
for(int i=0;i<len1;i++){
    first[i]=arr[k++];
}
int k=mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[k++];
}
int index1=0;
int index2=0;
k=s;
//while(index1<len1 && index2<len2)

}
void mergesort(int *arr,int s,int e){
if(s>e) return;// base case 

//sort the left part
int mid =s+(e-s)/2;
 mergesort(arr,s,mid);

 //sort the right
 mergesort(arr,mid+1,e);

 //to merge the both left and right sorted path
 merge(arr,s,e);

}

int main(){
    int arr[5]={2,4,8,48,4};
  int n=5;
  mergesort(arr,0,n-1);

    }