#include <stdio.h>
#include <stdbool.h>

bool TwoSum(int arr[], int len, int target);

int main() {
    // Write C code here
    int nums[] = {1, 2, 4, 6, 8, 9, 14, 15};
    int target = 13;
    int len = sizeof(nums)/ sizeof(nums[0]);
    bool result = TwoSum(nums, len, target);
    if (result) {
        printf("Two sums is available");
    } else {
        printf("Array does not contain two sums.\n");
    }

    return 0;
}
bool TwoSum(int arr[], int len, int target)
{
    
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            return true;
        }
        if (sum > target)
        {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}
