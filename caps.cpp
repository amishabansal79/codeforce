#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  char c;
     for(int i=0;i<s.length();i++){
      c=s.at(i);
      if(isupper(c)){
        
      }
      if(i==0){
      c=(char)toupper(c);
    }
    else{
      c=(char)tolower(c);
    }
    cout<<c;
    }
    
  
}