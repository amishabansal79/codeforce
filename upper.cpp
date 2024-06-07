#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  char c;
  for(int i=1;i<s.length();i++){
    s=toupper(s.at(0))+s[i];
  }
  cout<<s;
}