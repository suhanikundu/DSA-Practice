Reverse a Stack

You are given a stack of integers. Your task is to reverse the stack using recursion. You may only use standard stack operations (push, pop, top/peek, isEmpty). You are not allowed to use any loop constructs or additional data structures like arrays or queues.



Your solution must modify the input stack in-place to reverse the order of its elements.


Examples:
Input: stack = [4, 1, 3, 2]

Output: [2, 3, 1, 4]

Input: stack = [10, 20, -5, 7, 15]

Output: [15, 7, -5, 20, 10]



Input: stack = [100, 90, 80, 70, 60]

[60, 70, 80, 90, 100]
[80, 70, 80, 90, 100]
[60, 70, 90, 80, 100]
[90, 70, 80, 60, 100]
