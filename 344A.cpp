#include<iostream>
#include<string.h>
using namespace std;
int main(){
 int n,m;
 cin>>n;
 int p;
 cin>>p;
 int g=1;
 for(int i=1;i<n;i++){
  cin>>m;
  if(m!=p){
    g++;
  }
  p=m;
 }
 cout<<g;
}