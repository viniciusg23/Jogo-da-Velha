var game = ['-', '-', '-', '-', '-', '-', '-', '-', '-',];

// function game(){
    
// }

function attGame(cord, player){
    game[cord] = player;
    console.log(game);

    let winner = checkWin();
}

function checkWin(){
    if(game[0] == game[1] && game[0] == game[2])
        return 0, 1, 2;
    else if(game[3] == game[4] && game[3] == game[5])
        return;
}