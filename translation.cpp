#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string n,m;
  cin>>n>>m;
  reverse(n.begin(),n.end());
  if(n.compare(m)==0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}