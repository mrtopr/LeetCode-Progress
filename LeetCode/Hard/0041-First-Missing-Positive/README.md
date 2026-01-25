# 41. First Missing Positive

**Difficulty:** Hard
**Acceptance Rate:** 4340.5%

**Topics:** Array, Hash Table

[View on LeetCode](https://leetcode.com/problems/first-missing-positive/)

## Description

Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.

Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.

 

Constraints:

	1 <= nums.length <= 105
	-231 <= nums[i] <= 231 - 1

## Hints

1. Think about how you would solve the problem in non-constant space.  Can you apply that logic to the existing space?
2. We don't care about duplicates or non-positive integers
3. Remember that O(2n) = O(n)

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 12 ms | 55 MB | 2026-01-20 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
