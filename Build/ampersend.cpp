#include<bits/stdc++.h>
using namespace std;
void  swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << '\n';
}


int main(){
	ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
int a = 4;
int b= 5;
swap(a , b);
cout << a << ' ' << b << '\n';

}