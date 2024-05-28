class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
                int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;

        while(s<e)
        {
            // if we do e=mid or s=mid
            // so remove equals to from <= 
            if(arr[mid]<arr[mid+1])
            {
                // a wali line me hu
                // peak right me exist krte h
                s=mid+1;
            }

            else{
                // yaa to mai b line pr hu
                // ya to me peak element par hu
                e=mid;
            }
            // mid update
            mid=s+(e-s)/2;
        }

        return s;
        
    }
};
