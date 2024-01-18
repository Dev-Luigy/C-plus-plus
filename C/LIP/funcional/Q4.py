def print_format(lista):
    if len(lista) >= 1:
        print(lista[0], end=' '), print_format(lista[1:])

def primo(n):
    return (n > 1) and ((n == 2) or len(list(filter(lambda i: n % i == 0, range (2, n)))) == 0)

def list_primos(lista):
    return list(filter(lambda n: primo(n), lista))

print_format(list_primos(list(map(lambda n: int(n), input().split()))))