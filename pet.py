import random

talents = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'n', 'v', 'p', 'o', 'u']
wanted = ['a', 'b', 'c', 'd', 'e']
t = 0
tries = 0

while t <= 1:
    wanted_done = wanted.copy()
    talents_done = talents.copy()
    check = 0
    for i in range(5):
        x = random.choice(talents_done)
        print(x, '\t', end =" ")
        if x in wanted_done:
            wanted_done.remove(x)
            talents_done.remove(x)
            check += 1

    if check == 5:
        t += 1

    wanted_done.clear()
    talents_done.clear()
    tries += 1
    print('\n')

print("We got 1 exact match in", tries, "tries!")