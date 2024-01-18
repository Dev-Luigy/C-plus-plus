pertence = lambda x,L:len(L)>0 and (x==L[0] or pertence(x,L[1:]))
diff = lambda L, L2: list(filter(lambda x: not pertence(x, L), L2))

def printdireito(Lista):
    if len(Lista) > 0:
        print(Lista[0], end=' ')
        printdireito(Lista[1:])


#tratativas de variáveis
Lista = input().split(" ")
Lista2 = input().split(" ")
Lista = [int(value) for value in Lista]
Lista2 = [int(value) for value in Lista2]
printdireito(diff(Lista, Lista2) + diff(Lista2, Lista))