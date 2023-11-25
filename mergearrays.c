#include <stdio.h>
#include <stdlib.h>

int* mergearray(int arr[], int arrtwo[], int size1, int size2);

int main() {
	int nums[] = {1, 2, 4, 6, 8, 9, 14, 15};
	int len1 = sizeof(nums) / sizeof(nums[0]);
	int nums2[] = {3, 5, 7, 10, 11, 12, 13};
	int len2 = sizeof(nums2) / sizeof(nums2[0]);
	int* result = mergearray(nums, nums2, len1, len2);
	int total = len1 + len2;
	printf("The sorted array is as follows\n");
	for (int index = 0; index < total; index++)
	{
		printf("%d\n",result[index]);
	}
	return 0;
}
int* mergearray(int arr[], int arrtwo[], int size1, int size2)
{
	int len = size1 + size2;
	int* combined = (int*) malloc(len * sizeof(int));
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1  && j < size2)
	{
		if (arr[i] < arrtwo[j])
		{
			combined[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			combined[k] = arrtwo[j];
			k++;
			j++;
		}
	}
	while (i < size1)
	{
		combined[k] = arr[i];
		k++;
		i++;
	}
	while (j < size2)
	{
		combined[k] = arrtwo[j];
		k++;
		j++;
	}
	return combined;
}
