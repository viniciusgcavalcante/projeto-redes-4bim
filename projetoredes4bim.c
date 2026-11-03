#include <stdio.h>

int main() {
    int estados[10];
    int quantidade;
    int ativos = 0;
    int inativos = 0;
    int i;
    float percentual;

    printf("===== RADAR DE DISPOSITIVOS DA REDE =====\n");

    do {
        printf("\nDigite a quantidade de dispositivos de 1 a 10: ");
        scanf("%d", &quantidade);

        if (quantidade < 1 || quantidade > 10) {
            printf("Quantidade invalida! Digite um valor entre 1 e 10.\n");
        }
    } while (quantidade < 1 || quantidade > 10);

 
    i = 0;

	while (i < quantidade) {
    	do {
        printf("Dispositivo %d (1 = ativo / 0 = inativo): ", i + 1);
        scanf("%d", &estados[i]);

        if (estados[i] != 0 && estados[i] != 1) {
            printf("Estado invalido!\n");
        }

    	} while (estados[i] != 0 && estados[i] != 1);

    	i++; 
	}	


    i = 0;

	while (i < quantidade) {
    	if (estados[i] == 1) {
        ativos++;
    	} else {
        inativos++;
    	}

    	i++;
	}

    percentual = (ativos * 100.0) / quantidade;

    printf("\n========== PAINEL FINAL ==========\n");
    printf("Estados dos dispositivos: ");

	i = 0;

	while (i < quantidade) {
    	printf("%d ", estados[i]);
    	i++;
	}

    printf("\nTotal de dispositivos: %d\n", quantidade);
    printf("Dispositivos ativos: %d\n", ativos);
    printf("Dispositivos inativos: %d\n", inativos);
    printf("Disponibilidade: %.1f%%\n", percentual);


    if (inativos >= 2) {
        printf("ALERTA: 2 ou mais dispositivos estao indisponiveis!\n");
    } else {
        printf("STATUS: Nenhum alerta necessario.\n");
    }

    printf("Programa encerrado!\n");

    return 0;
}
