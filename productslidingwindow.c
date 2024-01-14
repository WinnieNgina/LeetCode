#include <stdio.h>
/**
 * Number of contiguous subarrays with product less than k.
 * Returns the count of such subarrays.
 */
int numSubarrayProductLessThanK(int *arr, int size, int k)
{
	int left = 0;
	int right;
	int i = 0;
	int product = 1;
	if (k <= 1)
		return 0;

	for ( right = 0; right < size; right++)
	{
		product *= arr[right];
		while (product >= k)
		{
			product = product / arr[left];
			left ++;
		}
		i += right - left +1;
	}
	return i;
}
int main() {
    // Example usage
    int nums[] = {10, 5, 2, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 100;

    int result = numSubarrayProductLessThanK(nums, size, k);
    printf("Number of contiguous subarrays: %d\n", result);

    return 0;
}

