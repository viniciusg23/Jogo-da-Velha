var game = [0, 0, 0, 0, 0, 0, 0, 0, 0];
let turn = 0;

function play(position){
    
    let opt = document.getElementById(`opt${position}`);
    let situation = 0;

    if(turn % 2 == 0){
        if(opt.textContent != "O" && opt.textContent != "X"){
            opt.textContent = "X";
            game[position] = "X"
            turn++;
            situation = checkWin();
        }
            
    }
    else{
        if(opt.textContent != "O" && opt.textContent != "X"){
            opt.textContent = "O";
            game[position] = "O"
            turn++;
            situation = checkWin();
        }
        
    }

    
    
    if(situation != 0){
        document.getElementById(`opt${situation.opt1}`).setAttribute("class", "option win");
        document.getElementById(`opt${situation.opt2}`).setAttribute("class", "option win");
        document.getElementById(`opt${situation.opt3}`).setAttribute("class", "option win");

        setTimeout(() =>{
            restart();
        },3000);
        
    }
    else if(checkDraw() == 1){

        for(let i = 0; i < 9; i++){
            document.getElementById(`opt${i}`).setAttribute("class", "option draw");
        }

        setTimeout(() =>{
            restart();
        },3000);
    }
    
    
}

function checkWin(){
    if(game[0] == game[1] && game[0] == game[2] && game[0] != 0){
        return {
            opt1: 0, opt2: 1, opt3: 2
        }
    }
    else if(game[3] == game[4] && game[3] == game[5] && game[3] != 0){
        return {
            opt1: 3, opt2: 4, opt3: 5
        }
    }
    else if(game[6] == game[7] && game[6] == game[8] && game[6] != 0){
        return {
            opt1: 6, opt2: 7, opt3: 8
        }
    }
    else if(game[0] == game[3] && game[0] == game[6] && game[0] != 0){
        return {
            opt1: 0, opt2: 3, opt3: 6
        }
    }
    else if(game[1] == game[4] && game[1] == game[7] && game[1] != 0){
        return {
            opt1: 1, opt2: 4, opt3: 7
        }
    }
    else if(game[2] == game[5] && game[2] == game[8] && game[2] != 0){
        return {
            opt1: 2, opt2: 5, opt3: 8
        }
    }
    else if(game[0] == game[4] && game[0] == game[8] && game[0] != 0){
        return {
            opt1: 0, opt2: 4, opt3: 8
        }
    }
    else if(game[6] == game[4] && game[6] == game[2] && game[6] != 0){
        return {
            opt1: 6, opt2: 4, opt3: 2
        }
    }
    else 
        return 0;

}

function checkDraw(){
    for(let i = 0; i < 9; i++){
        if(game[i] == 0)
            return 0;
    }
    return 1;
}

function restart(){
    window.location.reload()
}