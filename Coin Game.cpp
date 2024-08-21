// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    
    bool dp[n+1];
    dp[0]=false;
    dp[1]=true;
    
    for(int i=2;i<=n;i++){
        
        if(i-1>=0 and dp[i-1]==false)
        dp[i]=true;
        
        else if(i-x>=0 and !dp[i-x])
        dp[i]=true;
        
        else if(i-y>=0 and !dp[i-y])
        dp[i]=true;
        
        else
        dp[i]=false;
    }
    
    

    return dp[n];
}
