#include <stdio.h>
int main() {
int a[10],n,i,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("the sum of entered number is %d",sum);
	return 0;
}