#include <stdio.h>
//使用差分数列 前缀和 
int main()
{
	long long int n,m,lrd,ans=0;
	scanf("%lld %lld",&n,&m);
	long long int i,j,num[n],l,r,d,diff[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&num[i]);
		if(i==0)	diff[i]=num[i];
		else		diff[i]=num[i]-num[i-1];
	}
	for(i=0;i<m;i++)
	{
		scanf("%lld %lld %lld",&l,&r,&d);
		l-=1;
		diff[l]+=d;
		diff[r]-=d;
	}
	num[0]=diff[0];
	printf("%lld ",num[0]);
	ans=num[0];
	for(i=1;i<n-1;i++)
	{
		num[i]=num[i-1]+diff[i];
		ans+=num[i];
		printf("%lld ",ans);
	}
	printf("%lld\n",ans+num[n-2]+diff[n-1]);
	return 0;
}
