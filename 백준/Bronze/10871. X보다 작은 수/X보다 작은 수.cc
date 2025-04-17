#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, x, a[10005];
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> x;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++)
    if(a[i] < x) cout << a[i] << ' ';
}