#!/usr/bin/python3
"""Use the concept of sliding window to find the maximum subarray"""
from typing import List


def find_length(nums: List[int], k: int) -> int:
    left = sums = length = 0
    for right in range (len(nums)):
        sums += nums[right]
        while sums > k:
            sums -= nums[left]
            left += 1
        length = max(length, right - left + 1)
    return length


nums2 = [2, -1, 2, 1, -3, 2, 1]ls

k2 = 4
result2 = find_length(nums2, k2)
print(f"Test 2: {result2}")  # Expected output: 5