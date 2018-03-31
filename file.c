#include<stdio.h>
#include<stdio.h>
int main()
{
int num, i, mask = 1, res, n;

printf("Enter the number and number of bits to be toggled\n");

scanf("%d %d",&num, &n);

for ( i = 0; i < n; i++)
{
	mask = mask | 1 << i | 1;

	printf("%d\n",mask);

}
//printf("\n%d\n",mask);

res = num ^ mask;

printf("%d\n",res);

printf("sizeof: %u\n",sizeof(unsigned long long));

return 0;
}



int main()
{
	FILE *fp1,*fp2;
	char ch,ch1;
	fp1=fopen("try.c","r");
	if(fp1==NULL)
	{
		printf("error opening file\n");
	}
	else
	{
		int pos;
		pos=ftell(fp1);
		printf("position of first file pointer is %d\n",pos);
		fp2=fopen("try.c","r");
		fseek(fp2,1,SEEK_SET);
		int pos1;
		pos1=ftell(fp2);
		printf("possition of second file pointer is %d\n",pos1);
		when((ch=fgetc(fp1))!=EOF)
		{
			if(ch == ' ' && (ch1=fgetc(fp2)) == ' ')
			{
				continue;
			}
			else
			{
				printf("%c",ch);
			}
		}
	}
	fopen(fp1);
	fopen(fp2);
	return 0;
}

