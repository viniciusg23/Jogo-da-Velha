#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int option = 3, player1 = 0, player2 = 0, validation = 1, cordX, cordY, turn = 0;

    printf("BEM VINDO AO JOGO DA VELHA EM C");
    printf("\nAntes de começar vamos esclarecer algumas regras:\nDigite 1 para utilizar o X.\nDigite 0 para representar a O");
    printf("\nPressione ENTER para começar");
    getch();
    system("cls");
    fflush(stdin);

    while(option != 1 && option != 0){
        printf("Jogador 1 escolha o seu símbolo: 1 - X | 0 - O:\n");
        scanf("%d", &option);
    if(option == 1)
        player1 = option;
    else if(option == 0)
        player2 = 1;
    else
        printf("OPÇÃO INVÁLIDA\n");
    }


    int game[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            game[i][j] = 9;

    while(validation == 1){
        printf("Sitiação do Jogo:\n");
        printf("    0   1   2  X\n0 | %d | %d | %d |\n  |---|---|---|\n1 | %d | %d | %d |\n  |---|---|---|\n2 | %d | %d | %d |\nY\n", game[0][0], game[1][0], game[2][0], game[0][1], game[1][1], game[2][1], game[0][2], game[1][2], game[2][2]);

        if(turn % 2 == 0){  //player one turn
            printf("Digite a cordenada X: ");
            scanf("%d", &cordX);
            printf("Digite a cordenada Y: ");
            scanf("%d", &cordY);
            game[cordX][cordY] = player1;
        }
        else{ //player two turn
            printf("Digite a cordenada X: ");
            scanf("%d", &cordX);
            printf("Digite a cordenada Y: ");
            scanf("%d", &cordY);
            game[cordX][cordY] = player2;
        }
        turn++;

        validation = checkVictory(game);
    }

    printf("\nGame Over");
    return 0;
}


//function to check if someone win
int checkVictory(int gameVar[3][3]){
    int validation = 1;



   /* for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            printf("%d\n", gameVar[i][j]);
    */

    return validation;
}
