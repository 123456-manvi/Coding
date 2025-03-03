#include<iostream>
#include<vector>
using namespace std;

int maxGuests(int T, vector<int>& E, vector<int>& L){
  int currGue=0, maxGue=0;
for(int i=0;i<T;i++){
currGue+=E[i];
currGue-=L[i];
maxGue=max(maxGue,currGue);
}
return maxGue;
}
int main(){
  int T;
cin>>T;
vector<int> E(T), L(T);
for(int i=0;i<T;i++) cin>>E[i];
for(int i=0;i<T;i++) cin>>L[i];

cout<<maxGue(T,E,L)<<endl;
return 0;
}
