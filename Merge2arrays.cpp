#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
  // last valid element in nums1
int i=m-1;
// last element in nums2
int j=n-1;
// last position in nums1
int k=m+n-1;

// merge in reverse order
while(i>=0 && j>=0){
if(nums1[i]>nums2[j]){
// place nums1[i] at corrct pos
nums1[k--]=nums2[j--];
} else{
nums1[k--]=nums2[j--];
}
}

// if nums2 has rem element, copy them
while(j>=0){
nums1[k--]=nums2[j--];
}
}

int main(){
  vector<int> nums1={1,2,3,0,0,0};
vector<int> nums2={2,5,6};
int m=3,n=3;

merge(nums1,m,nums2,n);

// print merged array
for(int num : nums1){
cout<<num<<" ";
} 
cout<<endl;
return 0;
}
