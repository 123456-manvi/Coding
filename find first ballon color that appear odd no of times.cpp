#include<iostream.h>
#include<unordered_map>
using namespace std;

string findBallon(int N, vector<char> B){
  // store the freq of each ballon
unordred_map<char,int>freq;

// count the occ of each ballon
for(char color : B){
freq[color]++;
}
// find the first color with an odd count
for(char color : B){
if(freq[color]%2==1){
return string(1,color);
}
}
return "all are even"; //if no odd occ is found
}

int main(){
  int N;
cin>>N;

vector<char> B(N);
for(int i=0;i<N;i++){
cin>>B[i];
}
cout<<findBallon(N,B)<<endl;
return 0;
}
