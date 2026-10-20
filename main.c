#include <stdio.h>=

int main(){

    //Variavel para armazenar a quantidade de calorias consumidas
    int cal_consumidas;

    //Mensagens de boas vindas
    printf("\n");
    printf("=== Bem-vindo a Calculadora de Calorias! ===\n");
    printf("\n");
    printf("-> Este programa ira ajuda-lo a descobrir se voce gastou ou consumiu mais calorias hoje.\n");
    printf("-> Primeiro, precisamos saber quantas calorias voce consumiu no dia.\n");
    printf("-> Depois, precisamos saber quantas calorias voce gastou em cada atividade fisica que voce realizou hoje.\n");
    printf("-> Apos isso, a calculadora magica ira lhe dizer se voce consumiu ou perdeu caloria.\n");
    printf("\n");
    
    //Loop para evitar respostas inválidas do usuário
    do {

        printf("-> Por favor, digite a quantidade de calorias consumidas hoje:\n");
        scanf("%d", &cal_consumidas);

        if (cal_consumidas <= 0) {
            printf("Ops! Valor invalido! Por favor, digite um valor maior que zero.\n");
        }

    } while (cal_consumidas <= 0);

    //Calculadora de calorias
    while (1) {
        
        //Variáveis para armazenar a escolha do usuário, minutos de atividade, calorias gastas e calorias finais
        int opcao;
        int minutos;
        int cal_gastas;
        int cal_final;

        //Tabela de atividades físicas
        printf("\n=== Exercicios Realizados ===\n");
        printf("-> Perfeito! Agora, precisamos saber quantas calorias voce gastou em cada atividade fisica que voce realizou hoje.\n");
        printf("\n");
        printf(" [1] Corrida\n");
        printf(" [2] Bicicleta\n");
        printf(" [3] Musculacao\n");
        printf(" [4] Natacao\n");
        printf(" [5] Calcular\n");
        printf("\n");
        printf("=== Digite o numero da opcao desejada: ===\n");
        scanf("%d", &opcao);

        //Processar a escolha do usuário através de uma estrutura switch case
        switch (opcao) {
            case 1:
                
                // Cálculo de Corrida
                do {

                    printf("-> Certo! Voce escolheu Corrida.\n");
                    printf("-> Por quantos minutos voce realizou essa atividade:\n");
                    scanf("%d", &minutos);

                    if (minutos <= 0) {
                        printf("Ops! Valor invalido! Por favor, digite um valor maior que zero.\n");
                    }

                } while (minutos <= 0);

                printf("-> Certo! Registrado, vamos seguir.\n");
                cal_gastas = cal_gastas + (minutos * 10);

                break;

            case 2:
                
                // Cálculo de Bicicleta
                do {

                    printf("-> Certo! Voce escolheu Bicicleta.\n");
                    printf("-> Por quantos minutos voce realizou essa atividade:\n");
                    scanf("%d", &minutos);

                    if (minutos <= 0) {
                        printf("-> Ops! Valor invalido! Por favor, digite um valor maior que zero.\n");
                    }

                } while (minutos <= 0);

                printf("-> Certo! Registrado, vamos seguir.\n");
                cal_gastas = cal_gastas + (minutos * 4);
                
                break;
            case 3:
                
            // Cálculo de Musculacao
                do {

                    printf("-> Certo! Voce escolheu Musculacao.\n");
                    printf("-> Por quantos minutos voce realizou essa atividade?\n");
                    scanf("%d", &minutos);

                    if (minutos <= 0) {
                        printf("-> Ops! Valor invalido! Por favor, digite um valor maior que zero.\n");
                    }

                } while (minutos <= 0);

                printf("-> Certo! Registrado, vamos seguir.\n");
                cal_gastas = cal_gastas + (minutos * 5);

                break;
            case 4:
                
                // Cálculo de Natacao
                do {

                    printf("-> Certo! Voce escolheu Natacao.\n");
                    printf("-> Por quantos minutos voce realizou essa atividade:\n");
                    scanf("%d", &minutos);

                    if (minutos <= 0) {
                        printf("-> Ops! Valor invalido! Por favor, digite um valor maior que zero.\n");
                    }

                } while (minutos <= 0);

                printf("-> Certo! Registrado, vamos seguir.\n");
                cal_gastas = cal_gastas + (minutos * 8);

                break;
            case 5:
                
                // Calcular e encerrar a repetição
                cal_final = cal_consumidas - cal_gastas;

                printf("\n=== Resultado Final ===\n");
                printf("-> Muito bem! Agora vamos ver o resultado final do seu dia.\n");
                printf("-> Voce consumiu %d calorias e gastou %d calorias. Voce esta com %d calorias! \n", cal_consumidas, cal_gastas, cal_final);
                printf("Muito obrigado por utilizar a Calculadora de Calorias! Esperamos que voce tenha um dia mais saudavel e equilibrado!\n");
                return 0;
                
            default:
                
                //Repetir opções
                printf("-> Ops! Opcao invalida! Por favor, tente novamente e escolha uma das opcoes abaixo.\n");
        
        }
        
    }
    
    return 0;
}