/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int swap;
    int i;
    int j;
    int k;
    for (i = 0; i < numsSize; i++)
    {
        nums[i] *= nums[i];
    }
    for (j = 0; j < numsSize - 1; j++)
    {
        swap = 0;
        for (k = 1; k < (numsSize - j); k++)
        {
            if (nums[k - 1] > nums[k])
            {
                int temp = nums[k - 1];
                nums[k - 1] = nums[k];
                nums[k] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }
    // Allocate memory for the result array
    int* result = malloc(numsSize * sizeof(int));

    // Copy the sorted squared values to the result array
    memcpy(result, nums, numsSize * sizeof(int));

    // Set the returnSize pointer to the size of the result array
    *returnSize = numsSize;

    return result;
}
