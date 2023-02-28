#include<stdio.h>
void main()
{
	int min,max,i,n,c;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
	{
		i=1;c=0;
		while(i<=n)
		{
			if(n%i==0)
			c++;
			i++;
		}
		if(c==2)
		printf("%d\t",n);
		
	}
	
	printf("count=%d",c);
	
}
