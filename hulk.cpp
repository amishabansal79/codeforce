#include<iostream>
#include<string.h>
using namespace std;
int main(){
   int n;
   string s;
   cin>>n;
   for(int i=1;i<=n;i++){
    if(i%2!=0){
    s=s+"I hate ";
   }
   else{
    s=s+"I love ";
   }
   if(i!=n){
    s=s+"that ";
   }
   }
   cout<<s<<"it";
}