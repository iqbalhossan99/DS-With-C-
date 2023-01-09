#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
           int ans = 0;
	for(int i=0 ; i<n ; i++)
		if(a[i]!=a[i-1])
			ans++;
	cout<<ans;
	return 0;
}

// 10 20 10 20 30 10 20
