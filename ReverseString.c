#include <stdio.h>
#include <string.h>
void reverseString(char* s, int sSize);
int main()
{
	return 0;
}
void reverseString(char* s, int sSize)
{
	int i = 0;
	int j = sSize - 1;
	char temp;
	while (i < j)
	{
		temp =  s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
