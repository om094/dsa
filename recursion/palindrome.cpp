#include<iostream>
using namespace std;
bool check(string s,int i,int j){
if(i>j) return  true;
if(s[i]!=s[j]) return false;
else {
    return check(s,i+1,j-1);
}

}
int main(){

string name="abba";
check(name,0,name.length()-1);
if(check) cout<<"It is a palindrome ";
else
cout<<"Not a palindrome";

}