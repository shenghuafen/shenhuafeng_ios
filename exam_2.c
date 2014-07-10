#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MY_MAX_PATH 260
#define MY_COUNT 36

int main(int argc, char* argv[])
{
	char str[MY_MAX_PATH];
	int num[MY_COUNT]={0};
	int i = 0;
	int len = 0;
	printf("Please input string:");
	scanf("%s",str);
	len=strlen(str);

	for(i=0;i<len;i++)
	{
		if(str[i]>='0' && str[i]<= '9')
		{
			num[str[i]-'0']++;
		}

		if(str[i]>='a'&&str[i]<='z')
		{
			num[str[i]-'a' + 10]++;
		}
	}

	for(i=0;i<MY_COUNT;i++)
	{
		if( i < 10 )
		{
			printf("%c:------ %2d \r\n",i+'0',num[i]);
		}
		if( i >= 10)
		{
			printf("%c:------ %2d \r\n",i - 10 + 'a',num[i]);
		}
	}
	return 0;
}
