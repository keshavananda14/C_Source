#include<stdio.h>
void byte(unsigned char * data,int len)
{
	int i =0 ;
	for(i = 0; i < len;i++)
	{
		printf("%.2x ",data[i]);
	}
	printf("\n");
}
void byte_int(int a)
{
	byte((unsigned char *) &a,sizeof(a));
}

void byte_float(float a)
{
	byte((unsigned char *) &a,sizeof(a));
}

void byte_pointer(void *a)
{
	byte((unsigned char *) &a,sizeof(void *));
}

int main()
{
	int x = 256;
	float y = 2.0;
	int *z = &x;
	byte_int(x);
	byte_float(y);	
	byte_pointer(z);	
}
