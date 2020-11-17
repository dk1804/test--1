#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<limits.h>
enum State
{
	VALID,
	INVALID
}state = VALID;
int my_atoi(const char* str)
{
	int flag = 0;
	state = INVALID;
	if (str == NULL)
	{
		return 0;
	}
	if (*str == '\0')
		return 0;
	//¿Õ°××Ö·ûµÄ´¦Àí
	while (isspace(*str))
	{
		str++;
	}

	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (isdigit(*str))
	{
		ret = ret * 10 + flag*(*str - '0');
		if (ret > INT_MAX || ret < INT_MIN)
		{
			ret = 0;
			break;
		}
		str++;
	}
	if (*str == '\0')
	{
		state = VALID;
		return (int)ret;
	}
	return (int)ret;
}
int main()
{
	char* p = "   -12@345";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	return 0;
}