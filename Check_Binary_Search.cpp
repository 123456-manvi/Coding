#include<iostream>
using namespace std;

int binSearch(int arr[], int s, int e, int target){
  // bc
if(s>e){
// element not found
return -1;
}

// processing -khud solve kro

int mid=s+(e-s)/2;
if(arr[mid]==target){
return mid;
}
// bki recursion sambal lega

if(arr[mid]<target){
// right me jao
s=mid+1;
bool aageKaAns=binSearch(arr, s, e, target);
  return aageKaAns;
}
else{
e=mid-1;
bool aageKaAns=binSearch(arr, s, e, target);
  return aageKaAns;
}

int main(){
  int arr[]={10,20,30,40,50,60,70,80};
  int size=8;
  int start=0;
  int end=size-1;

  int target=80;

  int foundIndex=binSearch(arr, start, end, target);
  if(found!=-1){
  cout<<"target found"<<foundIndex<<endl;
  }

  else{
cout<<"target not found"<<endl;
  }
}
