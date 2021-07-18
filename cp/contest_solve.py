import sys, math, cmath, time, collections
from collections import deque, Counter, OrderedDict
from heapq import nsmallest, nlargest, heapify, heappop, heappush, heapreplace
from math import ceil, floor, log, log2, sqrt, gcd, factorial, pow, pi
from bisect import bisect_left, bisect_right

start_time = time.time()


def solve(a, b):
    """
    The actual solution begins here
    c = a + b
    print(c)
    """
    pass


def main():
    """
    Main function dedicated to get the I/P
    a, b = map(int, input().split())
    solve(a, b)
    """
    a, b = map(int, input().split())
    solve(a, b)


if __name__ == "__main__":
    # ONLINE_JUDGE = __debug__
    ONLINE_JUDGE = False

    # If it's Local - Get I/P from file
    if not ONLINE_JUDGE:
        sys.stdin = open("data.in", "r")
        sys.stdout = open("data.out", "w")

    testcases = int(input())
    for i in range(testcases):
        main()

    # If it's local - Print this O/P
    if not ONLINE_JUDGE:
        print(f"Time Elapsed: {time.time() - start_time} seconds")
        sys.stdout.close()
