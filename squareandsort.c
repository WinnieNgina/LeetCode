/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] *= nums[i];
    }
    for (int j = 0; i < numsSize - 1; j++)
    {
        int key = nums[j];
        for (int k = 1; k < numsSize; k++)
        {
            if (key < nums[k])
            {
                
            }
        }
        
    }
    
}
