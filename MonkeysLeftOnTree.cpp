#include<iostream>
using namespace std;

int monkeysLeftOnTree(int n, int m, int p, int k, int j){
  int ban_eat=m/k;
int pea_eat=p/j;

if(m % k !=0) ban_eat++;
if(p % j!=0) pea_eat++;

int mon_eat=ban_eat + pea_eat;

return max(n-mon_eat,0);
}

int main() {
    int n, m, p, k, j;
    cin >> n >> m >> p >> k >> j; // Input values

    cout << monkeysLeftOnTree(n, m, p, k, j) << endl; // Output result

    return 0;
}
