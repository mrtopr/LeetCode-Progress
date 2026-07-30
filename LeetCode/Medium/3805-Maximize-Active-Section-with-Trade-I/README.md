# 3805. Maximize Active Section with Trade I

**Difficulty:** Medium
**Acceptance Rate:** 6091.4%

**Topics:** String, Enumeration

[View on LeetCode](https://leetcode.com/problems/maximize-active-section-with-trade-i/)

## Description

You are given a binary string s of length n, where:

	&#39;1&#39; represents an active section.
	&#39;0&#39; represents an inactive section.

You can perform at most one trade to maximize the number of active sections in s. In a trade, you:

	Convert a contiguous block of &#39;1&#39;s that is surrounded by &#39;0&#39;s to all &#39;0&#39;s.
	Afterward, convert a contiguous block of &#39;0&#39;s that is surrounded by &#39;1&#39;s to all &#39;1&#39;s.

Return the maximum number of active sections in s after making the optimal trade.

Note: Treat s as if it is augmented with a &#39;1&#39; at both ends, forming t = &#39;1&#39; + s + &#39;1&#39;. The augmented &#39;1&#39;s do not contribute to the final count.

 

Example 1:

Input: s = &quot;01&quot;

Output: 1

Explanation:

Because there is no block of &#39;1&#39;s surrounded by &#39;0&#39;s, no valid trade is possible. The maximum number of active sections is 1.

Example 2:

Input: s = &quot;0100&quot;

Output: 4

Explanation:

	String &quot;0100&quot; &rarr; Augmented to &quot;101001&quot;.
	Choose &quot;0100&quot;, convert &quot;101001&quot; &rarr; &quot;100001&quot; &rarr; &quot;111111&quot;.
	The final string without augmentation is &quot;1111&quot;. The maximum number of active sections is 4.

Example 3:

Input: s = &quot;1000100&quot;

Output: 7

Explanation:

	String &quot;1000100&quot; &rarr; Augmented to &quot;110001001&quot;.
	Choose &quot;000100&quot;, convert &quot;110001001&quot; &rarr; &quot;110000001&quot; &rarr; &quot;111111111&quot;.
	The final string without augmentation is &quot;1111111&quot;. The maximum number of active sections is 7.

Example 4:

Input: s = &quot;01010&quot;

Output: 4

Explanation:

	String &quot;01010&quot; &rarr; Augmented to &quot;1010101&quot;.
	Choose &quot;010&quot;, convert &quot;1010101&quot; &rarr; &quot;1000101&quot; &rarr; &quot;1111101&quot;.
	The final string without augmentation is &quot;11110&quot;. The maximum number of active sections is 4.

 

Constraints:

	1 <= n == s.length <= 105
	s[i] is either &#39;0&#39; or &#39;1&#39;

## Hints

1. Split the string into several zero-one segments.
2. For each one-segment, if it has two neighbors (i.e., it is surrounded by two zero-segments), the total sum of their lengths is one of the candidates for delta.
3. Find the maximum delta and add it to the total number of ones in the string.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 152 ms | 175.9 MB | 2026-07-21 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
