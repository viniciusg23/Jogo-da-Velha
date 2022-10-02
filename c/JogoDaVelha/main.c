#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int option = 3, player1 = 0, player2 = 0, validation = 1, cordX, cordY, turn = 1, validCord = 1;

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

    printf("Sitiação do Jogo:\n");
    printf("    0   1   2  X\n0 | %d | %d | %d |\n  |---|---|---|\n1 | %d | %d | %d |   VEZ DO JOGADOR 1\n  |---|---|---|\n2 | %d | %d | %d |\nY\n", game[0][0], game[1][0], game[2][0], game[0][1], game[1][1], game[2][1], game[0][2], game[1][2], game[2][2]);


    while(validation == 1){

        if(turn % 2 != 0){  //player one turn
            printf("Digite a cordenada X: "); //X axis position from player 1
            scanf("%d", &cordX);
            printf("Digite a cordenada Y: "); //Y axis position from player 1
            scanf("%d", &cordY);
            game[cordX][cordY] = player1;

            validation = checkVictory(game, player1); //win validation
        }
        else{ //player two turn
            while(validCord == 1){
                printf("Digite a cordenada X: "); //X axis position from player 2
                scanf("%d", &cordX);
                printf("Digite a cordenada Y: "); //Y axis position from player 2
                scanf("%d", &cordY);

                if(cordX == 0 || cordX == 1 || cordX == 2){
                    if(cordY == 0 || cordY == 1 || cordY == 2){
                        break;
                    }
                }
                printf("Cordenada Inválida, Digite novamente: \n");
            }

            game[cordX][cordY] = player2;
            validation = checkVictory(game, player2); //win validation
        }

        if(validation == 0){
            system("cls");
            printf("    0   1   2  X\n0 | %d | %d | %d |\n  |---|---|---|\n1 | %d | %d | %d |   RESULTADO FINAL\n  |---|---|---|\n2 | %d | %d | %d |\nY\n", game[0][0], game[1][0], game[2][0], game[0][1], game[1][1], game[2][1], game[0][2], game[1][2], game[2][2]);
            victory(turn);
            break;
        }

        printf("Sitiação do Jogo:\n");
        printf("    0   1   2  X\n0 | %d | %d | %d |\n  |---|---|---|\n1 | %d | %d | %d |   VEZ DO JOGADOR %d\n  |---|---|---|\n2 | %d | %d | %d |\nY\n", game[0][0], game[1][0], game[2][0], game[0][1], game[1][1], game[2][1], (turn % 2) +1, game[0][2], game[1][2], game[2][2]);

        if(validation == 0)
            victory(turn);


        turn++;
    }


    //printf("\nGame Over");
    return 0;
}


//function to check if someone win
int checkVictory(int gameVar[3][3], int player){

    for(int i = 0; i < 3; i++){   //horizontal validation
        if(gameVar[0][i] == gameVar[1][i] && gameVar[0][i] == gameVar[2][i]){ /*EX: if(gameVar[0][0] == gameVar[1][0] && gameVar[0][0] == gameVar[2][0])*/
             if(gameVar[0][i] == player)
                return 0;
        }

    }

    for(int i = 0; i < 3; i++){   //vertical validation
        if(gameVar[i][0] == gameVar[i][1] && gameVar[i][0] == gameVar[i][2]){
            if(gameVar[i][0] == player)
                return 0;
        }

    }

    if(gameVar[0][0] == gameVar[1][1] && gameVar[0][0] == gameVar[2][2]){ // first diagonally validation
        if(gameVar[0][0] == player)
            return 0;
    }
    else if(gameVar[2][0] == gameVar[1][1] && gameVar[2][0] == gameVar[0][2]){ // second diagonally validation
        if(gameVar[2][0] == player)
            return 0;
    }

    return 1;
}

int victory(int turnVar){
    if(turnVar % 2 != 0){ //player 1 won
        printf("PLAYER 1 É O VENCEDOR!!!");
        return 1;
    }
    else{ //player 2 won
        printf("PLAYER 2 É O VENCEDOR!!!");
        return 1;
    }

return 0;
}

int checkDraw(){

}
