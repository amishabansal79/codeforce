#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string n,s;
  char ch;
  cin>>n;
  for(int i=0;i<n.length();i++){
    n[i]=tolower(n[i]);
    ch=n.at(i);
    if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y'){
      s= s+"."+ch;
    }
  }
  cout<<s;
}