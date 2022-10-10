

var time = 0;

function play(option){
    let opt = document.getElementById(`opt${option}`);
    if(time % 2 == 0){
        opt.textContent = "X";
        attGame(option, "X");
    }
        
    else{
        opt.textContent = "O"
        attGame(option, "O");
    }
        
    time++;
}