#include <stdio.h>
char a[100005];
int main()
{
	scanf("%s",a);
	int i=0,l=strlen(a),j,flag=0;
	for(i=0;i<l-1;i++)
	{
		if(a[i]=='A' && a[i+1]=='B')
		{
			for(j=i+2;j<l-1;j++)
			if(a[j]=='B' && a[j+1]=='A')
			{flag=1;
			break;}
			break;
		}
	}
	if(flag==0)
	for(i=0;i<l-1;i++)
	{
		if(a[i]=='B' && a[i+1]=='A')
		{
			for(j=i+2;j<l-1;j++)
			if(a[j]=='A' && a[j+1]=='B')
			{flag=1;
			break;}
			break;
		}
	}
	if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
