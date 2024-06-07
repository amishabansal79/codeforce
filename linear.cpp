#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  
    // Assuming non-leap year
    float num = 365;
  
    float denom = 365;
    float pr;
    int n = 0;
    cout << "Probability to find : " << endl;
    cin >> pr;
  
    float p = 1;
    while (p > pr){
        p *= (num/denom);
        num--;
        n++;
    }
  
    cout <<  " Total no. of people out of which there is " << p 
    << "probability that two of them have same birthdays is  "  << n << endl;
  
    return 0;
}
 