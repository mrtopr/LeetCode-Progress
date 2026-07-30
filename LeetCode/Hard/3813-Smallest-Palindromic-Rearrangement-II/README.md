# 3813. Smallest Palindromic Rearrangement II

**Difficulty:** Hard
**Acceptance Rate:** 4422.1%

**Topics:** Hash Table, Math, String, Combinatorics, Counting

[View on LeetCode](https://leetcode.com/problems/smallest-palindromic-rearrangement-ii/)

## Description

You are given a palindromic string s and an integer k.

Return the k-th lexicographically smallest palindromic permutation of s. If there are fewer than k distinct palindromic permutations, return an empty string.

Note: Different rearrangements that yield the same palindromic string are considered identical and are counted once.

 

Example 1:

Input: s = &quot;abba&quot;, k = 2

Output: &quot;baab&quot;

Explanation:

	The two distinct palindromic rearrangements of &quot;abba&quot; are &quot;abba&quot; and &quot;baab&quot;.
	Lexicographically, &quot;abba&quot; comes before &quot;baab&quot;. Since k = 2, the output is &quot;baab&quot;.

Example 2:

Input: s = &quot;aa&quot;, k = 2

Output: &quot;&quot;

Explanation:

	There is only one palindromic rearrangement: &quot;aa&quot;.
	The output is an empty string since k = 2 exceeds the number of possible rearrangements.

Example 3:

Input: s = &quot;bacab&quot;, k = 1

Output: &quot;abcba&quot;

Explanation:

	The two distinct palindromic rearrangements of &quot;bacab&quot; are &quot;abcba&quot; and &quot;bacab&quot;.
	Lexicographically, &quot;abcba&quot; comes before &quot;bacab&quot;. Since k = 1, the output is &quot;abcba&quot;.

 

Constraints:

	1 <= s.length <= 104
	s consists of lowercase English letters.
	s is guaranteed to be palindromic.
	1 <= k <= 106

## Hints

1. Only build floor(n / 2) characters (the rest are determined by symmetry).
2. Count character frequencies and use half the counts for construction.
3. Incrementally choose each character (from smallest to largest) and calculate how many valid arrangements result if that character is chosen at the current index.
4. If the count is at least k, fix that character; otherwise, subtract the count from k and try the next candidate.
5. Use combinatorics to compute the number of permutations at each step.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 16 ms | 16.9 MB | 2026-07-29 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
