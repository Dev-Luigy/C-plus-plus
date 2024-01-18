pmoreq = lambda L, p, q: list(map(lambda x: p + q if x == p else x,L))

def printdireito(Lista):
    if len(Lista) > 0:
        print(Lista[0], end=' ')
        printdireito(Lista[1:])
        
Lista = input().split(" ")
Lista = [int(value) for value in Lista]
printdireito(pmoreq(Lista, int(input()), int(input())))