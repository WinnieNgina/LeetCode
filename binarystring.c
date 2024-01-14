#include <stdio.h>
/**
 * longest substring that contains at most one "0"
 * Return: Length of substring
 */
int find_length(char *str)
{
	int right;
	int left = 0;
	int length = 0;
	int count = 0;
	int i = 0;

	for (right = 0; str[right ] != '\0'; right++)
	{
		if (str[right] == '0')
		{
			count++;
		}
		while (count > 1)
		{
			if (str[left] == '0')
			{
				count--;
			}
			left++;
		}
		i = right - left + 1;
		if (length < i)
		{
			length = i;
		}
	}
	return length;
}
int main()
{
    // Test case: Given s = "1101100111", the answer is 5
    char s[] = "1101100111";
    int result = find_length(s);
    printf("Length of the substring: %d\n", result);

    return 0;
}
