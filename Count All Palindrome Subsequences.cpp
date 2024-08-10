// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>

using namespace std;

int Solve(string str, int i, int j){
    if(i==j)
        return 1;
        
    if(i>j)
    return 0;
    
    if(str[i]==str[j]){
        return 1+Solve(str,i+1,j) + Solve(str,i,j-1);
    }
    else{
        return Solve(str,i+1,j) + Solve(str,i,j-1) + Solve(str,i+1,j-1);
    }
    
}
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    
    string str;
    cin>>str;
    
    cout<<Solve(str,0,str.length()-1)<<endl;

    return 0;
}
