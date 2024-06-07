#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int n,min=0,p=1,j=0;
  cin>>n;
  for(int i=0;i<n;i++){
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
      cin>>a[i];
    }
    for(int i=0;i<m;i++){
      if(a[i]>=min || a[i]==0){
        min=a[i];
        j=i;
      }
    }
    a[j]=a[j]+1;
    for(int i=0;i<m;i++){
      p=a[i]*p;
    }
    cout<<p;
    p=1;
    min=0;
    j=0;
  }

  
}