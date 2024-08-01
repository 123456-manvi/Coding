// use plain recursion
int solveUsingRecursion(int n){
// bc
if(n==0 || n==1){
return n;
}
// recursive relation
int ans=solveUsingRecursion(n-1) + solevUsingRecursion(n-2);
return ans;
}
  
// ..........................................

// use top -down approach
// rec+memoisation approach

int solveUsingMem(int n, vector<int>& dp){
// bc
if(n==0 || n==1){
return n;
}

  // step 3: if ans already exist then return ans
  if(dp[n] !=-1){
    return dp[n];
  }
  
// step 2:
// rec relation
// store and return using dp array

dp[n]=solveUsingMem(n-1,dp) + solveUsingMem(n-2,dp);
return dp[n];
}
  
// ......................................
// use tabulation...........

int solveUsingTabulation(int n){
// step1: create dp array
vector<int> dp(n+1,-1);
// step2: analyse base case and fill the dp array
dp[0]=0;
if(n==0)
  return dp[0];
dp[1]=1;

// step 3: fill the remaining dp array
// size: n+1
// index->0=>n
// index fill ho chuka h 0 and 1
// bacha kon sa index 2->n

for(int i=2;i<=n;i++){
  // copy paste the recursive logic
  // replace recursive calls with dp array
  // make sure dp array is use looping 
  dp[i]=dp[i-1]+dp[i-2,dp];
}

// ans return
return dp[n];
}


int fib(int n){
   // int ans=solveUsingRec(n);
// return ans;

  // 2 method...........................
// step1: create dp array
// ue memoization..
// vector<int> dp(n+1,-1);
// int ans=solveUsingMem(n,dp);

//   for(auto i: dp){
//     cout<<i<<" ";
//   }
  
// return ans;

  // use tabulation.......
  int ans=solveUsingTabulation(n);
  return ans;
 }
