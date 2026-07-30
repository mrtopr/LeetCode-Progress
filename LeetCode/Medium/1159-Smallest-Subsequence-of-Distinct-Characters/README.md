# 1159. Smallest Subsequence of Distinct Characters

**Difficulty:** Medium
**Acceptance Rate:** 7052.5%

**Topics:** String, Stack, Greedy, Monotonic Stack

[View on LeetCode](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/)

## Description

Given a string s, return the lexicographically smallest subsequence of s that contains all the distinct characters of s exactly once.

 

Example 1:

Input: s = &quot;bcabc&quot;
Output: &quot;abc&quot;

Example 2:

Input: s = &quot;cbacdcbc&quot;
Output: &quot;acdb&quot;

 

Constraints:

	1 <= s.length <= 1000
	s consists of lowercase English letters.

 

Note: This question is the same as 316: https://leetcode.com/problems/remove-duplicate-letters/

## Hints

1. Greedily try to add one missing character. How to check if adding some character will not cause problems ? Use bit-masks to check whether you will be able to complete the sub-sequence if you add the character at some index i.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 8.8 MB | 2026-07-19 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
