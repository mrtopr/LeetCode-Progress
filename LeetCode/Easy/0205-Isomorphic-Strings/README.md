# 205. Isomorphic Strings

**Difficulty:** Easy
**Acceptance Rate:** 4881.0%

**Topics:** Hash Table, String

[View on LeetCode](https://leetcode.com/problems/isomorphic-strings/)

## Description

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = &quot;egg&quot;, t = &quot;add&quot;

Output: true

Explanation:

The strings s and t can be made identical by:

	Mapping &#39;e&#39; to &#39;a&#39;.
	Mapping &#39;g&#39; to &#39;d&#39;.

Example 2:

Input: s = &quot;f11&quot;, t = &quot;b23&quot;

Output: false

Explanation:

The strings s and t can not be made identical as &#39;1&#39; needs to be mapped to both &#39;2&#39; and &#39;3&#39;.

Example 3:

Input: s = &quot;paper&quot;, t = &quot;title&quot;

Output: true

 

Constraints:

	1 <= s.length <= 5 * 104
	t.length == s.length
	s and t consist of any valid ascii character.


## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 9.2 MB | 2025-06-05 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
