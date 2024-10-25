'''
    2) Escreva um programa que verifique, em uma string, a existencia da letra 'a', seja
    maiuscula ou minuscula, alem de informar a quantidade de vezes em que ela ocorre.
    
    IMPORTANTE: Essa string pode ser informada atraves de qualquer entrada de sua preferencia ou pode ser previamente definida no codigo.
'''


def contar_Letras_A(Texto):
    """Função para contabilizar a quantidade de letras 'A' em um texto."""
    
    Texto = Texto.upper()   # Conversao do texto para letras maiusculas.
    
    # Contagem da quantidade de letras 'A' no texto (Normal e acentuada).
    qntLetras_A = Texto.count('A')
    qntLetras_A_acentuadas = (Texto.count('Á') + Texto.count('À') + Texto.count('Ã') + Texto.count('Â') + Texto.count('Ä'))
    
    print("=========================================================")
    print("| Quantidade de letras 'A' (SEM ACENTOS):    ", qntLetras_A)
    print("| Quantidade de letras 'A' (COM ACENTOS):    ", qntLetras_A_acentuadas)
    print("| Total de letras A:                         ", (qntLetras_A + qntLetras_A_acentuadas), "\n")


print("\n| CONTABILIZAR A QUANTIDADE DE LETRAS 'A'")
print("=========================================================")
Texto = input("| Insira um texto:   ")
contar_Letras_A(Texto)