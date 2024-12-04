#include<bits/stdc++.h>

using namespace std;

const int mysize1=1e5+1;
const int mysize2=1e6+1;
struct node{
	long long p,c;
}m[mysize1];
long long mon[mysize2]={};

int main()
{
	long long n,s;
	long long ans=0,sum=0,each=0,Max=-1;
	cin>>n>>s;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i].p>>m[i].c;
		Max=max(m[i].c,Max);
		sum+=m[i].p*m[i].c;//如果每个士兵每次都单独训练 
		mon[m[i].c]+=m[i].p;//训练次数一样的人可以合并 
		each+=m[i].p;//大家分开训练一次的费用之和 
	}
	for(int i=1;i<=Max;i++)
	{
		if(each<s)
		{
			break;
		}
		else
		{
			ans+=s;
			sum-=each;
			each-=mon[i];
		}
	}
	cout<<ans+sum;
	return 0;
}
