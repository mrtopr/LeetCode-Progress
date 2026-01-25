# 229. Majority Element II

**Difficulty:** Medium
**Acceptance Rate:** 5658.8%

**Topics:** Array, Hash Table, Sorting, Counting

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)

## Description

Given an integer array of size n, find all elements that appear more than &lfloor;n / 3&rfloor; times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]

Example 2:

Input: nums = [1]
Output: [1]

Example 3:

Input: nums = [1,2]
Output: [1,2]

 

Constraints:

	1 <= nums.length <= 5 * 104
	-109 <= nums[i] <= 109

 

Follow up: Could you solve the problem in linear time and in O(1) space?

## Hints

1. Think about the possible number of elements that can appear more than ⌊ n/3 ⌋ times in the array.
2. It can be at most two. Why?
3. Consider using Boyer-Moore Voting Algorithm, which is efficient for finding elements that appear more than a certain threshold.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 11 ms | 26.4 MB | 2026-01-19 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
