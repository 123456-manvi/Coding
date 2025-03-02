#include<iostream.h>
using namepace std;

bool isPalindrome(int n){
  int org=n;
int rev=0;

while(n>0){
rev=(rev*10)+(n%10);
n/=10;
}
return rev==org;
}
