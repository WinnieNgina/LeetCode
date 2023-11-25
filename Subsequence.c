#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int IsSubsequence (char* str1, char* str2, int size1, int size2);
int main ()
{
	char* str1 = "abcde";
	char* str2 = "ace";
	int size1 = sizeof(str1) / sizeof(str1[0]);
	int size2 = sizeof(str2) / sizeof(str2[0]);
	int result = IsSubsequence (str1, str2, size1, size2);
	printf("The result is %d\n", result);
	return 0;
}
int IsSubsequence (char* str1, char* str2, int size1, int size2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char* str;
	while (i < size1 && j < size2)
	{
		if (str1[i] == str2[j])
		{
			i++;
			j++;
			str[k] = str1[i];
			k++;
		}
		else
		{
			i++;
		}
	}
	int result = strcmp(str, str2);
	return result;
}
