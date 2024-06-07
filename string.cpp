#include<iostream>
#include<string.h>

using namespace std;
int main(){
  string str="huyuh";
  string s1="hell";
  string s2="jiji";
  //str.append(s1);//to merge two string
  //cout<<str+s1<<endl;//append krega
  cout<<str[1]<<endl;//to access a particular character
  str.clear();//to clear up a value
  cout<<str;
  cout<<s1.compare(s2)<<endl;
  if(str.empty()){
    cout<<"string is empty"<<endl;
  }
  string s="uhujjk";
  s.assign("jkjj");
  cout<<s<<endl;
  cout<<s.at(3)<<endl;
  cout<<s[3]<<endl;
}