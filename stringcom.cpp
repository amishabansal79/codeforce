#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string str;
  int temp;
  cin>>str;
  for(int i=0;i<str.length();i++){
    for(int j=0;j<str.length()-i-1;j++)
    if(str[i]=='+'){
      if(str[i+1]<str[i-1]){
        temp=str[i+1];
        str[i+1]=str[i-1];
        str[i-1]=temp;
      }
    }
  }
  cout<<str;
}
