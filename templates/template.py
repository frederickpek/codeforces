import math
from sys import stdin

# for line in stdin:
#	a, b, c,d = line.split()	

t = int(input())
for _ in range(t):
	a, b, c, d = map(int, input().split())
	print("{}/{}".format(a+b, c+d))