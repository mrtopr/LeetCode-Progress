# 1222. Remove Covered Intervals

**Difficulty:** Medium
**Acceptance Rate:** 6011.6%

**Topics:** Array, Sorting

[View on LeetCode](https://leetcode.com/problems/remove-covered-intervals/)

## Description

Given an array intervals where intervals[i] = [li, ri] represent the interval [li, ri), remove all intervals that are covered by another interval in the list.

The interval [a, b) is covered by the interval [c, d) if and only if c <= a and b <= d.

Return the number of remaining intervals.

 

Example 1:

Input: intervals = [[1,4],[3,6],[2,8]]
Output: 2
Explanation: Interval [3,6] is covered by [2,8], therefore it is removed.

Example 2:

Input: intervals = [[1,4],[2,3]]
Output: 1

 

Constraints:

	1 <= intervals.length <= 1000
	intervals[i].length == 2
	0 <= li < ri <= 105
	All the given intervals are unique.

## Hints

1. How to check if an interval is covered by another?
2. Compare each interval to all others and check if it is covered by any interval.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 6 ms | 15.7 MB | 2026-07-07 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
