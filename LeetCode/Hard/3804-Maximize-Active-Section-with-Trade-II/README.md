# 3804. Maximize Active Section with Trade II

**Difficulty:** Hard
**Acceptance Rate:** 6509.9%

**Topics:** Array, String, Binary Search, Segment Tree

[View on LeetCode](https://leetcode.com/problems/maximize-active-section-with-trade-ii/)

## Description

You are given a binary string s of length n, where:

	&#39;1&#39; represents an active section.
	&#39;0&#39; represents an inactive section.

You can perform at most one trade to maximize the number of active sections in s. In a trade, you:

	Convert a contiguous block of &#39;1&#39;s that is surrounded by &#39;0&#39;s to all &#39;0&#39;s.
	Afterward, convert a contiguous block of &#39;0&#39;s that is surrounded by &#39;1&#39;s to all &#39;1&#39;s.

Additionally, you are given a 2D array queries, where queries[i] = [li, ri] represents a substring s[li...ri].

For each query, determine the maximum possible number of active sections in s after making the optimal trade on the substring s[li...ri].

Return an array answer, where answer[i] is the result for queries[i].

Note

	For each query, treat s[li...ri] as if it is augmented with a &#39;1&#39; at both ends, forming t = &#39;1&#39; + s[li...ri] + &#39;1&#39;. The augmented &#39;1&#39;s do not contribute to the final count.
	The queries are independent of each other.

 

Example 1:

Input: s = &quot;01&quot;, queries = [[0,1]]

Output: [1]

Explanation:

Because there is no block of &#39;1&#39;s surrounded by &#39;0&#39;s, no valid trade is possible. The maximum number of active sections is 1.

Example 2:

Input: s = &quot;0100&quot;, queries = [[0,3],[0,2],[1,3],[2,3]]

Output: [4,3,1,1]

Explanation:

	
	Query [0, 3] &rarr; Substring &quot;0100&quot; &rarr; Augmented to &quot;101001&quot;

	Choose &quot;0100&quot;, convert &quot;0100&quot; &rarr; &quot;0000&quot; &rarr; &quot;1111&quot;.

	The final string without augmentation is &quot;1111&quot;. The maximum number of active sections is 4.

	
	
	Query [0, 2] &rarr; Substring &quot;010&quot; &rarr; Augmented to &quot;10101&quot;

	Choose &quot;010&quot;, convert &quot;010&quot; &rarr; &quot;000&quot; &rarr; &quot;111&quot;.

	The final string without augmentation is &quot;1110&quot;. The maximum number of active sections is 3.

	
	
	Query [1, 3] &rarr; Substring &quot;100&quot; &rarr; Augmented to &quot;11001&quot;

	Because there is no block of &#39;1&#39;s surrounded by &#39;0&#39;s, no valid trade is possible. The maximum number of active sections is 1.

	
	
	Query [2, 3] &rarr; Substring &quot;00&quot; &rarr; Augmented to &quot;1001&quot;

	Because there is no block of &#39;1&#39;s surrounded by &#39;0&#39;s, no valid trade is possible. The maximum number of active sections is 1.

	

Example 3:

Input: s = &quot;1000100&quot;, queries = [[1,5],[0,6],[0,4]]

Output: [6,7,2]

Explanation:

	
	Query [1, 5] &rarr; Substring &quot;00010&quot; &rarr; Augmented to &quot;1000101&quot;
	Choose &quot;00010&quot;, convert &quot;00010&quot; &rarr; &quot;00000&quot; &rarr; &quot;11111&quot;.

	The final string without augmentation is &quot;1111110&quot;. The maximum number of active sections is 6.

	
	
	Query [0, 6] &rarr; Substring &quot;1000100&quot; &rarr; Augmented to &quot;110001001&quot;
	Choose &quot;000100&quot;, convert &quot;000100&quot; &rarr; &quot;000000&quot; &rarr; &quot;111111&quot;.

	The final string without augmentation is &quot;1111111&quot;. The maximum number of active sections is 7.

	
	
	Query [0, 4] &rarr; Substring &quot;10001&quot; &rarr; Augmented to &quot;1100011&quot;
	Because there is no block of &#39;1&#39;s surrounded by &#39;0&#39;s, no valid trade is possible. The maximum number of active sections is 2.

	

Example 4:

Input: s = &quot;01010&quot;, queries = [[0,3],[1,4],[1,3]]

Output: [4,4,2]

Explanation:

	
	Query [0, 3] &rarr; Substring &quot;0101&quot; &rarr; Augmented to &quot;101011&quot;

	Choose &quot;010&quot;, convert &quot;010&quot; &rarr; &quot;000&quot; &rarr; &quot;111&quot;.

	The final string without augmentation is &quot;11110&quot;. The maximum number of active sections is 4.

	
	
	Query [1, 4] &rarr; Substring &quot;1010&quot; &rarr; Augmented to &quot;110101&quot;

	Choose &quot;010&quot;, convert &quot;010&quot; &rarr; &quot;000&quot; &rarr; &quot;111&quot;.

	The final string without augmentation is &quot;01111&quot;. The maximum number of active sections is 4.

	
	
	Query [1, 3] &rarr; Substring &quot;101&quot; &rarr; Augmented to &quot;11011&quot;

	Because there is no block of &#39;1&#39;s surrounded by &#39;0&#39;s, no valid trade is possible. The maximum number of active sections is 2.

	

 

Constraints:

	1 <= n == s.length <= 105
	1 <= queries.length <= 105
	s[i] is either &#39;0&#39; or &#39;1&#39;.
	queries[i] = [li, ri]
	0 <= li <= ri < n

## Hints

1. Split consecutive zeros and ones into segments and give each segment an ID.
2. The answer should be the maximum of ans[i] = len[i - 1] + len[i + 1], where i is a one-segment.
3. For a zero-segment, define ans[i] = 0.
4. Note that all three segments (i - 1, i, and i + 1) should be fully covered by the substring.
5. Use a segment tree to perform range maximum queries on the answer. The query to the segment tree is not straightforward since we need to ensure the zero-segments are fully covered. Handle the first and last segments separately.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 163 ms | 283.2 MB | 2026-07-22 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
