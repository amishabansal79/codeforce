#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string s;
  int f=0;
  char c;
  getline(cin,s);
  for(int i=0;i<s.length();i++){
    c=s.at(i);
    if(c=='H' || c=='Q' || c=='9' ){
      f++;
    }
  }
  if(f==0){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
}