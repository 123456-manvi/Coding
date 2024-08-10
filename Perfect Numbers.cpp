class Solution{
public:

int isPerfectNumber(long long N){
  long long sum=0;
for(int i=2;i<=sqrt(N);i++){
if(N%i==0){
if(i!=N/i){
sum+=(i+N/i);
}
else{
sum+=i;
}
}
}
return N!=1 && sum+1==N;
}
};
