#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[100];
    int n,i,j;
    scanf("%d",&n);
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=j-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
     for(i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
}
void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
	{
		if(c>a)
		{
			printf("%d %d %d",c,a,b);
		}
		else if(c<a&&c>b)
		{
			printf("%d %d %d",a,c,b);
		}
		else if(c<b)
		{
			printf("%d %d %d",a,b,c);
		}
	}
	if(a<b)
	{
		if(c>b)
		{
			printf("%d %d %d",c,b,a);
		}
		else if(c<a)
		{
			printf("%d %d %d",b,a,c);
		}
		else if(c<b&&c>a)
		{
			printf("%d %d %d",b,c,a);
		}
	}
}
void main()
{
    int i,n,j;
    int q=0;
    int a[100];
    int x;
    int p=1;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        p=p*a[j]*x;
        q+=p;
        p/=a[j];
    }
    printf("%d",q);
}


