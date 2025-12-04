# Advent of Code 2015, Day 1 Part 1

instructions = input()
floor = 0

for step in instructions:
    if step == "(":
        floor += 1
    else:
        floor -= 1

print(floor)
