/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int solve(int A) {
    long long l=1, r=A, curr=1;
    if(A==0)
    return 0;
    
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if((mid*(mid+1))/2 <=A)
        {
            curr=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return (int)curr;
}
