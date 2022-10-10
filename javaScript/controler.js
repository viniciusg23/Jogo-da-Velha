var time = 0;

function play(option){
    let situation;
    let opt = document.getElementById(`opt${option}`);
    if(time % 2 == 0){
        opt.textContent = "X";
        situation = attGame(option, "X");
    }
        
    else{
        opt.textContent = "O"
        situation = attGame(option, "O");
    }


    endGame(situation);

    time++;
}

function endGame(sitation){
    if(sitation != 0){
        let opt1 = document.getElementById(`opt${sitation.opt1}`);
        let opt2 = document.getElementById(`opt${sitation.opt2}`);
        let opt3 = document.getElementById(`opt${sitation.opt3}`);

        
    }
}
