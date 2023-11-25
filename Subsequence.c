#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int IsSubsequence (char* str1, char* str2);
int main ()
{
	char* str1 = "abcde";
	char* str2 = "ace";
	//int size1 = sizeof(str1) / sizeof(str1[0]);
	//int size2 = sizeof(str2) / sizeof(str2[0]);
	int result = IsSubsequence (str1, str2);
	if (result == 0)
	{
		printf("%s is a subsequence of %s\n", str2, str1);
	}
	else
	{
		printf("%s is NOT a subsequence of %s\n", str2, str1);
	}
	return 0;
}
int IsSubsequence (char* str1, char* str2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int max_length = (strlen(str1) < strlen(str2)) ? strlen(str1) : strlen(str2);
	//Allocate memory based on which is the smallest string 
	char* str = (char*)malloc(max_length + 1); // +1 for null terminator
	while (str1[i] != '\0' && str2[j] != '\0')
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
	str[k] = '\0'; // Null-terminate the result string
	int result = strcmp(str, str2);
	free(str); // Don't forget to free the allocated memory
	return result;
}
