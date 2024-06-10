#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string n,m,out;
  cin>>n>>m;
  char c,c1;
  for(int i=0;i<n.length();i++){
    c=n.at(i);
    c1=m.at(i);
    if(c!=c1){
      out=out+"1";
    }
    else{
      out=out+"0";
    }
  }
  cout<<out;
}