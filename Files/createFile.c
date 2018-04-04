#include<stdio.h>


int main(int argc,char *argv[])
{
	char buff[100] = {'\0'};
	printf("Enter File name to Create: ");
	scanf("%s",buff);
	FILE *fp=fopen(buff,"w");
	if(fp == NULL)
	{
		printf("\nFile %s Opening Error\n",buff);
	}
	fprintf(fp,"File %s has successfully Created\n",buff);
	fclose(fp);
	//return 0;
}
