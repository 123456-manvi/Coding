int Solution::findCount(const vector<int> &A, int B) {
    int n=A.size();
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(B==A[i])
        {
            c++;
        }
    }
    return c;
}
