Escreva um programa que implementa um sorteio. Seu programa deverá receber os nomes dos participantes, um por linha, armazenando-os dinamicamente na memória, usando o vetor de strings PARTICIPANTES. A cada participante inserido, a quantidade N, inicialmente em 0, deverá ser incrementada. A lista de nomes é encerrada quando o usuário entrar com a palavra "acabou". Na linha a seguir, o usuário irá informar a semente S de geração de números aleatórios desejada.

O programa deverá realizar o sorteio utilizando a função rand:

indice_participante=rand()%N;

Caso um participante já tenha sido sorteado, o resultado deve ser ignorado. O programa termina quando todos os participantes tiverem sido sorteados.

Exemplos:
Entrada

Andre Campos
Andre Brito
Julio
Rafael
Wellington
acabou
10

Saída
Andre Campos
Rafael
Julio
Andre Brito
Wellington

Entrada
Aragorn
Arwen
Bilbo
Boromir
Celeborn
Eowyn
Frodo
Galadriel
Gandalf
Gollum
Nazgul
Radagast
Samwise
Sauron
Smaug
Tom Bombadil
acabou
100

Saída
Gandalf
Eowyn
Galadriel
Samwise
Aragorn
Arwen
Frodo
Boromir
Celeborn
Sauron
Bilbo
Smaug
Tom Bombadil
Radagast
Nazgul
Gollum