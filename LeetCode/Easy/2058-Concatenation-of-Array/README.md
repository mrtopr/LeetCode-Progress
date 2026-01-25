# 2058. Concatenation of Array

**Difficulty:** Easy
**Acceptance Rate:** 9010.7%

**Topics:** Array, Simulation

[View on LeetCode](https://leetcode.com/problems/concatenation-of-array/)

## Description

Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

 

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]

Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]

 

Constraints:

	n == nums.length
	1 <= n <= 1000
	1 <= nums[i] <= 1000

## Hints

1. Build an array of size 2 * n and assign nums[i] to ans[i] and ans[i + n]

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 16.8 MB | 2026-01-15 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
