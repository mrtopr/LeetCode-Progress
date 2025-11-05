# 1411. Convert Binary Number in a Linked List to Integer

**Difficulty:** Easy
**Acceptance Rate:** 8238.5%

**Topics:** Linked List, Math

[View on LeetCode](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/)

## Description

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.

 

Example 1:

Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10

Example 2:

Input: head = [0]
Output: 0

 

Constraints:

	The Linked List is not empty.
	Number of nodes will not exceed 30.
	Each node&#39;s value is either 0 or 1.

## Hints

1. Traverse the linked list and store all values in a string or array. convert the values obtained to decimal value.
2. You can solve the problem in O(1) memory using bits operation. use shift left operation ( << ) and or operation ( | ) to get the decimal value in one operation.

## Latest Accepted Submission

| Language | Runtime | Memory | Submitted |
|---|---|---|---|
| cpp | 0 ms | 10.6 MB | 2025-06-13 |

---
*Synced automatically by [LeetSync Pro](https://github.com/leetsync-pro).*
