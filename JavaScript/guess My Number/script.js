'use strict';
/*
console.log(document.querySelector('.message').textContent);
//DOM=DOCUMENT OBJECT MODEL
document.querySelector('.message').textContent='Correct Number!';

document.querySelector('.number').textContent=13;
document.querySelector('.score').textContent=10;

document.querySelector('.guess').value=23;
console.log(document.querySelector('.guess').value);

*/
let num=Math.trunc(Math.random()*20)+1;
let score=20;
let highscore=0;

document.querySelector('.check').addEventListener('mouseover',function(){
   const guess = Number(document.querySelector('.guess').value);
    console.log(typeof guess);

if(!guess)
{
    document.querySelector('.message').textContent='No Number!';

}
else if(guess===num)
{
    document.querySelector('.message').textContent='Correct Number!';
    score=score+10;
    document.querySelector('.score').textContent=score;
    document.querySelector('.number').textContent=num;
    document.querySelector('body').style.backgroundColor='#60b347';
    document.querySelector('.number').style.width ='30rem';
    if(score > highscore)
    {
        highscore=score;
        document.querySelector('.highscore').textContent=highscore;
    }

}
else if(guess>num)
{
    if(score>1)
    {
        document.querySelector('.message').textContent='Too High!!';
    score--;
    document.querySelector('.score').textContent=score;

       
    }
    else
    {
        document.querySelector('.message').textContent='You Lost!!';
        document.querySelector('.score').textContent=0;

    }
    } 
else if(guess<num)
if(score>1)
    {
        document.querySelector('.message').textContent='Too Low!!';
    score--;
    document.querySelector('.score').textContent=score;

       
    }
    else
    {
        document.querySelector('.message').textContent='You Lost!!';
        document.querySelector('.score').textContent=0;
    }
    
});
document.querySelector('.again').addEventListener('click',function() {
    num=Math.trunc(Math.random()*20)+1;
    score=20;
document.querySelector('.message').textContent='Start guessing';
document.querySelector('.score').textContent=score;
document.querySelector('.highscore').textContent=highscore;
document.querySelector('body').style.backgroundColor='#222';
document.querySelector('.number').style.width ='15rem';
document.querySelector('.number').textContent='?';
document.querySelector('.guess').value='';
});
