#!/bin/python3
import math
import os
import random
import re
import sys

#
# Complete the 'dynamicArray' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#

def dynamicArray(n, queries):
    # Write your code here
    memo=[]
    lastAnswer = 0
    for i in range(n):
        memo.append([])

    for q in queries:
       #print(q)
        if q[0] == 1:
            idx = (q[1]^lastAnswer)%n
            memo[idx].append(q[2])
            print(memo[idx])

        elif q[0] == 2:
            idx = (q[1]^lastAnswer)%n
            size = len(memo[idx])
            lastAnswer = memo[idx][q[2]%size]
            print(lastAnswer)
    

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    q = int(first_multiple_input[1])

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = dynamicArray(n, queries)

    #fptr.write('\n'.join(map(str, result)))
    #fptr.write('\n')

    #fptr.close()
