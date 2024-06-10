#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string s;
  char ch;
  cin>>s;
  int f=0,k=0;
  for(int i=0;i<s.length();i++){
    ch=s.at(i);
    if(ch=='0'){
      f++;
      k=0;
      if(f==7){
        cout<<"YES";
        f=0;
        break;
      }
    }
    else{
      k++;
      f=0;
      if(k==7){
        cout<<"YES";
        k=0;
        break;
      }
    }
  }
  if(f!=0 || k!=0){
    cout<<"NO";
  }
}