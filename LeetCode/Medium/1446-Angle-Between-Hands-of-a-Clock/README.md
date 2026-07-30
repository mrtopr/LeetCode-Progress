# 1446. Angle Between Hands of a Clock

**Difficulty:** Medium
**Acceptance Rate:** 6979.8%

**Topics:** Math

[View on LeetCode](https://leetcode.com/problems/angle-between-hands-of-a-clock/)

## Description

Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

Answers within 10-5 of the actual value will be accepted as correct.

 

Example 1:

Input: hour = 12, minutes = 30
Output: 165

Example 2:

Input: hour = 3, minutes = 30
Output: 75

Example 3:

Input: hour = 3, minutes = 15
Output: 7.5

 

Constraints:

	1 <= hour <= 12
	0 <= minutes <= 59

## Hints

1. The tricky part is determining how the minute hand affects the position of the hour hand.
2. Calculate the angles separately then find the difference.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 8 MB | 2026-06-18 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
