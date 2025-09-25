D = int(input())
E = int(input())
R = D

for i in range(E):
    op = input()
    Q = int(input())
    if op == "+":
        R += Q
    else:
        R -= Q

print(R)
