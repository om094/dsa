#include<iostream>
using namespace std;
void rev(int i,int j,string &s){

    if(i>j) return;//base case
 
        swap(s[i],s[j]);
        i++;
        j--;
  
    rev(i,j,s);

}
int main(){
 
    
string name="om";
int i=0;
int j=name.length()-1;
rev(i,j,name);
cout<<name<<endl;
}