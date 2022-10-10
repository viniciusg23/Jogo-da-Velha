var game = ['-', '-', '-', '-', '-', '-', '-', '-', '-',];

// function game(){
    
// }

function attGame(cord, player){
    game[cord] = player;
    console.log(game);

    let winner = 0;
    winner = checkWin();
    
    let draw = 0;
    draw = checkDraw();

    return winner;

    if(winner != 0){
        return winner;
    }
    else if(draw !=0) {
        return draw;
    }

}

function checkWin(){
    if(game[0] == game[1] && game[0] == game[2] && game[0] != "-"){
        console.log("checkwin")
        return {
            opt1: 0, opt2: 1, opt3: 2
        }
    }   
    else if(game[3] == game[4] && game[3] == game[5] && game[3] != "-"){
        return {
            opt1: 3, opt2: 4, opt3: 5
        }
    }
    else if(game[6] == game[7] && game[6] == game[8]  && game[6] != "-"){
        return {
            opt1: 6, opt2: 7, opt3: 8
        }
    }
    else if(game[0] == game[3] && game[0] == game[6] && game[0] != "-"){
        return {
            opt1: 0, opt2: 3, opt3: 6
        }
    }  
    else if(game[1] == game[4] && game[1] == game[7] && game[1] != "-"){
        return {
            opt1: 1, opt2: 4, opt3: 7
        }
    }
    else if(game[2] == game[5] && game[2] == game[8] && game[2] != "-"){
        return {
            opt1: 2, opt2: 5, opt3: 8
        }
    }
    else if(game[0] == game[4] && game[0] == game[8] && game[0] != "-"){
        return {
            opt1: 0, opt2: 4, opt3: 8
        }
    }  
    else if(game[6] == game[4] && game[6] == game[2] && game[6] != "-"){
        return {
            opt1: 6, opt2: 4, opt3: 2
        }
    }
    else
        return 0;
}

function checkDraw(){
    if(game[0] != "-" && game[1] != "-" && game[2] != "-" && game[3] != "-" && game[4] != "-" && game[5] != "-" && game[6] != "-" && game[7] != "-" && game[8] != "-")
        return 10;
}