#include<stdio.h>

int cashValue[6]={1,5,10,20,50,100};
int cashCount[6];
int price;
int count;
char mark;

int main()
{
	while(~scanf("%d%d%d%d%d%d%d",cashCount,cashCount+1,cashCount+2,cashCount+3,cashCount+4,cashCount+5,&price))
	{
		count=0;
		mark=0;
		int i;
		for(i=5;i>=0;--i)
		{
			while(cashCount[i]>0)
			{
				if(price<cashValue[i])
				{
					break;
				}
				price-=cashValue[i];
				cashCount[i]--;
				count++;
				if(price==0)
				{
					mark=1;
					break;
				}
			}
			if(mark)
			{
				break;
			}
		}
		printf("%d\n",count);
	}
}
