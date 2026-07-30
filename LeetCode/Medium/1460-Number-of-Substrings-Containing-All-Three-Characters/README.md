# 1460. Number of Substrings Containing All Three Characters

**Difficulty:** Medium
**Acceptance Rate:** 7439.0%

**Topics:** Hash Table, String, Sliding Window

[View on LeetCode](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/)

## Description

Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

Example 1:

Input: s = &quot;abcabc&quot;
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are &quot;abc&quot;, &quot;abca&quot;, &quot;abcab&quot;, &quot;abcabc&quot;, &quot;bca&quot;, &quot;bcab&quot;, &quot;bcabc&quot;, &quot;cab&quot;, &quot;cabc&quot; and &quot;abc&quot; (again). 

Example 2:

Input: s = &quot;aaacb&quot;
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are &quot;aaacb&quot;, &quot;aacb&quot; and &quot;acb&quot;. 

Example 3:

Input: s = &quot;abc&quot;
Output: 1

 

Constraints:

	3 <= s.length <= 5 x 104
	s only consists of &#39;a&#39;, &#39;b&#39; or &#39;c&#39; characters.

## Hints

1. For each position we simply need to find the first occurrence of a/b/c on or after this position.
2. So we can pre-compute three link-list of indices of each a, b, and c.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 2 ms | 11 MB | 2026-06-30 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
