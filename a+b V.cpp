#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		int a,b,d=0;
		scanf("%d %d",&a,&b);
		for(int i=1;a/i!=0||b/i!=0;i*=10){
			d=d+(a%(i*10)+b%(i*10))%(i*10);
			a=a-a%(i*10);
			b=b-b%(i*10);
		}
		printf("%d\n",d);
	}
}
