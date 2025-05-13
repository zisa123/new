#include<bits/stdc++.h>
using namespace std;

const int n = 1005;
int a[n];
int x;

bool binar(int l, int r) {
	if (l > r) return false;
    int mid = (l + r)/2;


	if (a[mid] == x) return true;
	else if (a[mid] < x)  return binar(mid + 1, r);
	else  return binar(l, mid-1);
}


int main(){
	ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
  int m;
  cin >> m;
  for (int i = 1; i <= m; i++) {
  	cin >> a[i];
  }
  x = 10;
  cout << boolalpha << binar(1, m);
}