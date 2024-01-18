palim = lambda L: len(L) <= 1 or (L[0] == L[-1] and palim(L[1:-1]))
recStr = lambda n, W: len(W) >= n and (palim(W[len(W)-n:]) or recStr(n, W[0:-1]))

print("sim" if recStr(int(input()), input()) else "nao")