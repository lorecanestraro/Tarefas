from math import * 


def calcular_expressao(equacao, v):
    equacao = equacao.replace('z', str(v))  
    
    try:
       
        resultado = eval(equacao, {"__builtins__": None}, globals())
        return resultado
    except Exception as e:
        print(f"Erro na expressão: {e}")

def mill(x0, p, k, it, eq):
    while k < it :
            x1 = calcular_expressao(eq, x0)
            
            if abs(x1 - x0) < p or abs(calcular_expressao(eq, x1)) < p:
                break

            cp = abs(x1 - x0)
            cp2 = abs(calcular_expressao(eq, x1))

            print("CP: ", cp )
            print("CP2: ", cp2)
            print(f"iteração: {k} : {x1}")
        
            x0 = x1
            k += 1

    print(f"Raiz aproximada: {x1} após {k} iterações")
    

def bisseccao(a, b, p, k, eq, it):
    if abs(b - a) < p:
        print("Raiz:", a)
    else:
        while abs(b - a) > p and k < it:
            k = k + 1
            finicio = calcular_expressao(eq, a)
            meio = (a + b) / 2
            fmeio = calcular_expressao(eq, meio)

            if finicio * fmeio < 0:
                b = meio
            else:
                a = meio

            print(f"iteração {k} : [{a}, {b}]")

        print("Raiz aproximada:", meio)
        print("Número de interações:", k)
        

def newton(z0, p, it, eq, eqD):
    k = 1

    while k < it:
        z1 = z0 - (calcular_expressao(eq, z0) / calcular_expressao(eqD, z0))
        print(f"iteração: {k} : {z1}")
        cp = abs(z1 - z0)
        print("CP: ", cp)
        if abs(z1 - z0) < p:
            break

        z0 = z1
        k += 1
    
    print("Raiz aproximada:  ", z1)
    print("Número de interações:", k)
    

def secante(z0, z1, p, it, eq):
    k = 1;

    while k < it:
        z2 = z1 - ((calcular_expressao(eq, z1) * (z1 - z0))/(calcular_expressao(eq, z1) - calcular_expressao(eq, z0)))
        print(f"iteração: {k} : {z2}")
        if abs(z1 - z2) < p or abs(calcular_expressao(eq, z2)) < p:
            print("Raiz aproximada:  ", z2)
            print("Número de interações:", k)
            break

        z0 = z1
        z1 = z2
        k += 1

    

def regulaFalsi(z0, z1, p, it, eq):
    
    if calcular_expressao(eq, z0) * calcular_expressao(eq, z1) > 0:
        print("Os valores iniciais não cercam uma raiz (devem ter sinais opostos).")
        return
    
    k = 1
    z2 = z0

    while k < it:
        
        fz0 = calcular_expressao(eq, z0)
        fz1 = calcular_expressao(eq, z1)
        z2 = z1 - (fz1 * (z1 - z0)) / (fz1 - fz0)
        fz2 = calcular_expressao(eq, z2)
        
        
        if abs(fz2) < p or abs(z1 - z0) < p:
            print(f"Raiz aproximada: {z2} após {k} iterações")
            return
        
       
        if fz2 * fz0 < 0:
            z1 = z2
        else:
            z0 = z2

        print(f"iteração {k} : [{z0}, {z1}]")

        k += 1
    
    print(f"Raiz aproximada: {z2} após {k} iterações")
    

    
            
    
         
   


def pedir_float(mensagem):
    while True:
        try:
            valor = float(input(mensagem))
            return valor
        except ValueError:
            print("Entrada inválida! Por favor, insira um número válido.")

def pedir_int(mensagem):
    while True:
        try:
            valor = int(input(mensagem))
            return valor
        except ValueError:
            print("Entrada inválida! Por favor, insira um número inteiro.")



def principal():
    print("Escolha o método que deseja utilizar:")
    print("1. Bisseccao    2. Mill    3. Newton    4. Secante    5. RegulaFalsi")

    resposta1 = input()
    while resposta1 not in ['1', '2', '3', '4', '5']:
        print("Opção invalida, tente novamente: ")
        resposta1 = input()

    if resposta1 == '1':
        print("Você escolheu o método da Bissecção")
        
        a = pedir_float("Digite o primeiro valor do intervalo: ")
        b = pedir_float("Digite o segundo valor do intervalo: ")
        precisao = pedir_float("Digite o valor da precisão: ")
        maxinteracoes = pedir_int("Digite o número máximo de interações: ")
        
        eq = input("Digite a equação (use 'z' para a variável): ")
        while 'z' not in eq:
            print("Utilize z para a variavel!")
            eq = input("Digite a equação (use 'z' para a variável): ")
        

        k = 0  
        bisseccao(a, b, precisao, k, eq, maxinteracoes)

    elif resposta1 == '2':
        print("Você escolheu o método Iterativo (Mil)")
        
        z0 = pedir_float("Digite o valor inicial de x: ")
        p = pedir_float("Digite a precisão: ")
        it = pedir_int("Digite o número máximo de iterações: ")
        eq = input("Digite a equação (use 'z' para a variável): ")
        while 'z' not in eq:
            print("Utilize z para a variavel!")
            eq = input("Digite a equação (use 'z' para a variável): ")

        k = 1
        x1 = 0.0
    
        mill(z0, p, k, it, eq)

    elif resposta1 == '3':
        print("Você escolheu o método iterativo Newton")

        z0 = pedir_float("Digite o valor inicial de z: ")
        p = pedir_float("Digite a precisão: ")
        it = pedir_int("Digite o número máximo de interações: ")
        eq = input("Digite a equação (use 'z' para a variável): ")
        while 'z' not in eq:
            print("Utilize z para a variavel!")
            eq = input("Digite a equação (use 'z' para a variável): ")
        eqD = input("Digite a equação derivada (use 'z' para variável): ")
        while 'z' not in eqD:
            print("Utilize z para a variavel!")
            eqD = input("Digite a equação (use 'z' para a variável): ")

        newton(z0, p, it, eq, eqD)

    elif resposta1 == '4':
        print("Você escolheu o método iterativo Secante")

        z0 = pedir_float("Digite o primeiro valor de z: ")
        z1 = pedir_float("Digite o segundo valor de z: ")
        p = pedir_float("Digite a precisão: ")
        it = pedir_int("Digite o número máximo de interações: ")
        eq = input("Digite a equação (use 'z' para a variável): ")
        while 'z' not in eq:
            print("Utilize z para a variavel!")
            eq = input("Digite a equação (use 'z' para a variável): ")
        
        secante(z0, z1, p, it, eq)

    elif resposta1 == '5':
        print("Você escolheu o método iterativo RegulaFalsi")

        z0 = pedir_float("Digite o primeiro valor de z: ")
        z1 = pedir_float("Digite o segundo valor de z: ")
        p = pedir_float("Digite a precisão: ")
        it = pedir_int("Digite o número máximo de interações: ")
        eq = input("Digite a equação (use 'z' para a variável): ")
        while 'z' not in eq:
            print("Utilize z para a variavel!")
            eq = input("Digite a equação (use 'z' para a variável): ")

        regulaFalsi(z0, z1, p, it, eq)

principal()
