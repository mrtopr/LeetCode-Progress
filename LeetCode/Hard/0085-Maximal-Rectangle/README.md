# 85. Maximal Rectangle

**Difficulty:** Hard
**Acceptance Rate:** 5942.5%

**Topics:** Array, Dynamic Programming, Stack, Matrix, Monotonic Stack

[View on LeetCode](https://leetcode.com/problems/maximal-rectangle/)

## Description

Given a rows x cols binary matrix filled with 0&#39;s and 1&#39;s, find the largest rectangle containing only 1&#39;s and return its area.

 

Example 1:

Input: matrix = [[&quot;1&quot;,&quot;0&quot;,&quot;1&quot;,&quot;0&quot;,&quot;0&quot;],[&quot;1&quot;,&quot;0&quot;,&quot;1&quot;,&quot;1&quot;,&quot;1&quot;],[&quot;1&quot;,&quot;1&quot;,&quot;1&quot;,&quot;1&quot;,&quot;1&quot;],[&quot;1&quot;,&quot;0&quot;,&quot;0&quot;,&quot;1&quot;,&quot;0&quot;]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.

Example 2:

Input: matrix = [[&quot;0&quot;]]
Output: 0

Example 3:

Input: matrix = [[&quot;1&quot;]]
Output: 1

 

Constraints:

	rows == matrix.length
	cols == matrix[i].length
	1 <= rows, cols <= 200
	matrix[i][j] is &#39;0&#39; or &#39;1&#39;.


## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 275 ms | 15.8 MB | 2025-06-21 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
