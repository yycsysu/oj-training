import sys

max_puts = 0

def find_max(city, x, y, current_puts):
    global max_puts
    height = len(city)
    width = len(city[0])
    if x >= height or y >= width:
        if current_puts > max_puts:
            max_puts = current_puts
            #print_city(city)
        return

    next_x = (x + 1) % height
    next_y = y + 1 if x + 1 >= height else y

    if can_put(city, x, y):
        city[x][y] = 2
        find_max(city, next_x, next_y, current_puts + 1)
        city[x][y] = 0

    find_max(city, next_x, next_y, current_puts)
    
def can_put(city, x, y):
    height = len(city)
    width = len(city[0])

    if city[x][y] != 0:
        return False

    for i in xrange(x):
        here = city[x - i - 1][y]
        if here == 2:
            return False
        elif here == 1:
            break
    for i in xrange(height - x - 1):
        here = city[x + i + 1][y]
        if here == 2:
            return False
        elif here == 1:
            break
    for i in xrange(y):
        here = city[x][y - i - 1]
        if here == 2:
            return False
        elif here == 1:
            break
    for i in xrange(width - y - 1):
        here = city[x][y + i + 1]
        if here == 2:
            return False
        elif here == 1:
            break
    return True

def print_city(city):
    print 'city:'
    for line in city:
        print line
    print '===='

if __name__ == '__main__':
    while True:
        max_puts = 0
        sizeOfLine = sys.stdin.readline()
        if sizeOfLine and int(sizeOfLine) != 0:
            width = int(sizeOfLine)
            city = [[0 for x in xrange(width)] for x in xrange(width)]
            for i in xrange(width):
                line = sys.stdin.readline()
                if line:
                    for j in xrange(len(line)):
                        if line[j] == '.':
                            city[i][j] = 0
                        elif line[j] == 'X':
                            city[i][j] = 1
            find_max(city, 0, 0, 0)

            print max_puts
    
        else:
            break


