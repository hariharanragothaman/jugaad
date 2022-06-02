"""
செயல் பேசும் ஆழம் இங்கே சொற்கள் பேசுமா?
Focus, Determination and Sheer-Will
"""

import os, sys, math, cmath, time, collections
from collections import deque, Counter, OrderedDict, defaultdict
from heapq import nsmallest, nlargest, heapify, heappop, heappush, heapreplace
from math import ceil, floor, log, log2, sqrt, gcd, factorial, pow, pi
from bisect import bisect_left, bisect_right
from functools import reduce

# SOME GENERAL HELPER
def input_as_array(): return list(map(int, input().split()))

def debug():
    if os.path.exists("data.in"):
        print("*" * 10)

def debug3():
    if os.path.exists("data.in"):
        print("-" * 10)

def debug2(value):
    if os.path.exists('data.in'):
        print(value)

start_time = time.time()


def solve():
    pass

def main():
    pass


if __name__ == "__main__":
    if os.path.exists('data.in'):
        sys.stdin = open("data.in", "r")
        sys.stdout = open("data.out", "w")

    testcases = int(input())
    for i in range(testcases):
        main()

    # If it's local - Print this O/P
    if os.path.exists('data.in'):
        print(f"Time Elapsed: {time.time() - start_time} seconds")
        sys.stdout.close()
