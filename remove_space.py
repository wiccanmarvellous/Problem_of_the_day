s = input()
s = '_'.join(s.lstrip().rstrip().split(' '))
idx = s.index('.')
s = s[:idx] + s[idx + 1:]
f = open('removed_spaces.txt', 'a')
f.write(s)
f.close()