#include<iostream>
using namespace std;

class Solution{
public:

int isValid(string str){
  int dots=0;
for(int i=0;i<str.size();i++){
string num="";
while(i<str.size() && str[i]!='.'){
num+=str[i];
i++;
}
if(str[i]=='.')dots++;
int number=stoi(num);
if(number>255) return false;
}

return dots==3;
}
};
