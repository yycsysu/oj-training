import sys

while True:
	line = sys.stdin.readline().strip()
	if line:
		[a, b] = list(map(int, line.split()))
		print a + b
	else:
		break
