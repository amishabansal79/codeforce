#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int n,m,a[n];
  cin>>n;
  for(int i=1;i<=n;i+2){
    a[i]=i;
  }
   for(int i=1;i<=n;i+2){
    cout<<a[i];
  }
}