#include <stdio.h>
#include <string.h>

int verifyPrefixo(char palavra[100], char palavraB[100]) {
    int response = 0;
    
    int tam = strlen(palavraB);
    
    int aux = 1;
    
    for (int i = 0; i < tam; i++) {
        if ( palavra[i] != palavraB[i] )
            aux = 0;
    }
    
    if (aux == 1)
        response = 1;
    
    return response;
}

int verifySufixo(char palavra[100], char palavraB[100]) {
    int response = 0;
    
    int tamA = strlen(palavra);
    int tam = strlen(palavraB);
    
    int aux = 1;
    
    for (int i = 0; i < tam; i++) {
        if ( palavra[tamA-i-1] != palavraB[tam-i-1] )
            aux = 0;
    }
    
    if (aux == 1)
        response = 1;
    
    return response;
}

int main() {

    int n = 0; // quantidade de prefixos
    int m = 0; // quantidade de sufixos
    char palavraDigitada[100];
    char arrayPalavrasResposta[200][100];
    char palavraFinal[100];
    int index = 0;

    scanf("%d", &n);

    if ( n >= 0 ) {
    
        char arrayPrefixos[n][10]; // 200 palavras de tamanho 10 caracteres

        // digitar prefixos
        for (int i = 0; i < n; i++) {
            scanf(" %s", arrayPrefixos[i]);
        }

        scanf("%d", &m);

        if ( m >= 0 ) {
            char arraySufixos[m][10]; // 200 palavras de tamanho 10 caracteres

            // digitar sufixos
            for (int j = 0; j < m; j++) {
                scanf(" %s", arraySufixos[j]);
            }

            // digitar palavras
            do {

                scanf("%s",palavraDigitada);

                if ( strcmp(palavraDigitada, "-1") == 0 ) {
                    // parar loop e exibir resultado
                    for(int o = 0; o < index; o++) {
                        printf("%s\n", arrayPalavrasResposta[o]);
                    }
                    break;
                } else {
                    // continuar logica de inserir dados no array                    
                    int auxPalavraFinalPre = 0,
                        auxPalavraFinalSuf = 0,
                        auxTamanhoIgual = 0;

                    // verifica se tem prefixo
                    for (int k = 0; k < n; k++) {

                        if ( verifyPrefixo(palavraDigitada, arrayPrefixos[k]) == 1 ) { // contem prefixo
                            strncpy(palavraFinal, palavraDigitada + strlen(arrayPrefixos[k]), strlen(palavraDigitada) - strlen(arrayPrefixos[k]) );
                            auxPalavraFinalPre = 1;
                            break;
                        }

                    }

                    // verifica se tem sufixo e tira
                    for (int l = 0; l < m; l++) {

                        if ( verifySufixo(palavraDigitada, arraySufixos[l]) == 1 ) { // contem sufixo
                            if (auxPalavraFinalPre == 1) { // caso tenha tirado prefixo
                                if ( strlen(palavraFinal) != strlen(arraySufixos[l]) ) {
                                    strncpy(palavraFinal, palavraFinal, strlen(palavraFinal) - strlen(arraySufixos[l]) );
                                } else {
                                    auxTamanhoIgual = 1;
                                }
                            } else { // caso nao tenha tirado prefixo
                                strncpy(palavraFinal, palavraDigitada, strlen(palavraDigitada) - strlen(arraySufixos[l]) );
                            }
                            auxPalavraFinalSuf = 1;
                            break;
                        }

                    }

                    if ( ( ( auxPalavraFinalPre == 1 && auxPalavraFinalSuf == 1 ) && strlen(palavraFinal) == 0 ) || auxTamanhoIgual == 1) {
                        continue;
                    } else if ( ( auxPalavraFinalPre == 1 || auxPalavraFinalSuf == 1 ) && strlen(palavraFinal) > 0 ) {
                        strcpy(arrayPalavrasResposta[index], palavraFinal);
                    } else if ( ( auxPalavraFinalPre == 1 && auxPalavraFinalSuf == 1 ) && strlen(palavraFinal) > 0 ) {
                        strcpy(arrayPalavrasResposta[index], palavraFinal);
                    } else {
                        strcpy(arrayPalavrasResposta[index], palavraDigitada);
                    }

                    memset (&palavraFinal, 0, sizeof (palavraFinal) );

                }

                index++;
            } while (1);

        } 

    }

    return 0;
}