#include<iostream>
using namespace std;

int findBalanceValue(string S){
  int starCount=0, hashCount=0;
for(char ch : S){
if(ch=='*') starCount++;
else if(ch=='#') hashCount++;
}
// Return the difference (* count - # count)
    return starCount - hashCount;
}

int main(){
  string S;
cin>>S;

 cout << findBalanceValue(S) << endl; // Print the result
    return 0;
}
