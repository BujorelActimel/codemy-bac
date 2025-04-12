from random import randint

with open("input.txt", "w") as f:
    nums = [randint(0, 100000) for _ in range(50)]
    for num in nums:
        f.write(str(num) + " ")
    
    y = randint(0, 50)
    x = randint(0, y)
    f.write("\n" + str(x) + " ")
    f.write(str(y))