#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
	char buff[100] = {'\0'};
	int count = 0;
	printf("Enter File name to Read: ");
	scanf("%s",buff);
	FILE *fp=fopen(buff,"r");
	if(fp == NULL)
	{
		printf("\nFile %s Opening Error\n",buff);
		return 0;
	}
	while(!(feof(fp)))
	{
		memset(buff,'\0',sizeof(buff));
		if(fgets(buff,sizeof(buff),fp) == NULL) 
		{
			break;
		}
		count++;
		printf("No: %d [%s]",count,buff);
	}
	fclose(fp);
	printf("No Of Lines in File are : %d",count);
}
