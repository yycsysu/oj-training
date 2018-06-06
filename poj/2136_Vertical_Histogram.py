import sys

count = [0] * 26

line = sys.stdin.readline().strip()
line2 = sys.stdin.readline().strip()
line3 = sys.stdin.readline().strip()
line4 = sys.stdin.readline().strip()
if True:
#line and line2 and line3 and line4:
    #[a, b] = list(map(int, line.split()))
    for l in line:
        if l >= 'A' and l <= 'Z':
            index = ord(l) - ord('A')
            count[index] += 1
    for l in line2:
        if l >= 'A' and l <= 'Z':
            index = ord(l) - ord('A')
            count[index] += 1
    for l in line3:
        if l >= 'A' and l <= 'Z':
            index = ord(l) - ord('A')
            count[index] += 1
    for l in line4:
        if l >= 'A' and l <= 'Z':
            index = ord(l) - ord('A')
            count[index] += 1

    while True:
        m = 0
        for i in range(len(count)):
            if count[m] <= count[i]:
                m = i

        if count[m] <= 0:
            break

        line_list = []
        for i in range(m + 1):
            if (count[i] == count[m]):
                line_list.append('*')
                count[i] -= 1
            else:
                line_list.append(' ')

        print ' '.join(line_list)


print 'A B C D E F G H I J K L M N O P Q R S T U V W X Y Z'
