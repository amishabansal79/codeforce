#include<iostream>
using namespace std;
main(){
  int n,sum=0;
  cin>>n;
  
  for(int i=0;i<n;i++){
      string s;
      cin>>s;
      if((s==("X++")) || (s==("++X"))){
        sum=sum+1;
      }
      else{
        sum=sum-1;
      }
    }
    cout<<sum;
}