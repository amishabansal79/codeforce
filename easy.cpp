#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int n;
  int s=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]==1){
      s++;
    }
  }
  if(s==0){
    cout<<"EASY";
  }
  else{
    cout<<"HARD";
  }
}