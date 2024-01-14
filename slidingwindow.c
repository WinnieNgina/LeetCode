#include <stdio.h>
/**
 * Calculate the length of the longest subarray
 * arr: the array we have to find subarray for
 * Return: Length of subarray
 */
int find_length(int *arr, int k, int size)
{
	int left = 0;
	int right = 0;
	int i = 0;
	int sums = 0;
	int length = 0;
	for(right = 0; right < size; right++)
	{
		sums += arr[right];
		while (sums > k)
		{
			sums -= arr[left];
			left ++;
		}
		i = right - left + 1;
		if (length < i)
		{
			length = i;
		}
	}
	return length;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 11;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = find_length(arr, k, size);

    printf("Length of the longest subarray with sum less than or equal to %d: %d\n", k, result);

    return 0;
}
