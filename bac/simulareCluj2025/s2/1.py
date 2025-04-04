a, b = input().split()

a, b = int(a), int(b)

c = 0
d = 0
p = 1

while p <= a or p <= b:
    x = a // p % 10
    y = b // p % 10
    e = (x + y + d) % 10
    d = (x + y + d) // 10
    c = c + e * p
    p = p * 10

if d != 0:
    c = c + d * p

print(c)


a = 1224 
b = 479

