def verificar_ponto(retangulo, ponto):
    return ponto[0] >= retangulo[0] and ponto[0] <= retangulo[0] + retangulo[2] and ponto[1] >= retangulo[1] and ponto[1] <= retangulo[1] + retangulo[3]


print("sim" if verificar_ponto(tuple(map(int, input().split())), tuple(map(int, input().split()))) else "nao")