Sort a Stack


0

100
You are given a stack of integers. Your task is to sort the stack in descending order using recursion, such that the top of the stack contains the greatest element. You are not allowed to use any loop-based sorting methods (e.g., quicksort, mergesort). You may only use recursive operations and the standard stack operations (push, pop, peek/top, and isEmpty).


Examples:
Input: stack = [4, 1, 3, 2]

Output: [4, 3, 2, 1]

Explanation:

After sorting, the largest element (4) is at the top, and the smallest (1) is at the bottom.



Input: stack = [1]

Output: [1]

Explanation:

A single-element stack is already sorted.



Input: stack = [10, 20, -5, 7, 15]

[10, 20, -5, 7, 15]
[20, 10, -5, 7, 15]
[20, 10, 15, -5, 7]
[20, 15, 10, 7, -5]
