#include<bits/stdc++.h>
using namespace std;

void fun(int l,int r)
{               cout<<"\n"<<l<<" TEST "<<r<<"\n"<<"\n";
	int mid = (l+r)/2;
	for(int i = l ; i <= r ; i++)
	{
		cout<<i<<endl;
	}


	if(l<r){
		fun(l,mid);
		fun(mid+1,r);
	}

	//cout<<"\n";
}

int main()
{
	int n;
	cin>>n;
	fun(0,n-1);
}

