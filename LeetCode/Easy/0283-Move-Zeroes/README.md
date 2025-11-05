# 283. Move Zeroes

**Difficulty:** Easy
**Acceptance Rate:** 6418.1%

**Topics:** Array, Two Pointers

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)

## Description

Given an integer array nums, move all 0&#39;s to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

 

Constraints:

	1 <= nums.length <= 104
	-231 <= nums[i] <= 231 - 1

 

Follow up: Could you minimize the total number of operations done?

## Hints

1. In-place means we should not be allocating any space for extra array. But we are allowed to modify the existing array. However, as a first step, try coming up with a solution that makes use of additional space. For this problem as well, first apply the idea discussed using an additional array and the in-place solution will pop up eventually.
2. A two-pointer approach could be helpful here. The idea would be to have one pointer for iterating the array and another pointer that just works on the non-zero elements of the array.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 23.8 MB | 2025-11-02 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
