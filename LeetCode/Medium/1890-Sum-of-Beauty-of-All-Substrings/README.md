# 1890. Sum of Beauty of All Substrings

**Difficulty:** Medium
**Acceptance Rate:** 7453.3%

**Topics:** Hash Table, String, Counting

[View on LeetCode](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/)

## Description

The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

	For example, the beauty of &quot;abaacc&quot; is 3 - 1 = 2.

Given a string s, return the sum of beauty of all of its substrings.

 

Example 1:

Input: s = &quot;aabcb&quot;
Output: 5
Explanation: The substrings with non-zero beauty are [&quot;aab&quot;,&quot;aabc&quot;,&quot;aabcb&quot;,&quot;abcb&quot;,&quot;bcb&quot;], each with beauty equal to 1.

Example 2:

Input: s = &quot;aabcbaa&quot;
Output: 17

 

Constraints:

	1 <= s.length <= 500
	s consists of only lowercase English letters.

## Hints

1. Maintain a prefix sum for the frequencies of characters.
2. You can iterate over all substring then iterate over the alphabet and find which character appears most and which appears least using the prefix sum array

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 100 ms | 11.2 MB | 2025-06-06 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
