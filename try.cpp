#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int temp=0;
  string s;
  cin>>s;
  char ch;
  for(int i=0;i<s.length();i++){
    for(int j=1;j<(s.length()-1);j++){
       if(s.at(i)=='+'){
      if(s.at(j)<s.at(i-1)){
        temp=s.at(j);
        s.at(j)=s.at(i-1);
        s.at(i-1)=temp;
      }
    }
    }
   
  }
  cout<<s;
  return 0;
}