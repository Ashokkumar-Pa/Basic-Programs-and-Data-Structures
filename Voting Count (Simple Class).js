const prompt = require('prompt-sync')();
class voting
{
    constructor(vote)
    {
        this.vote = vote
    }
}
let A = new voting;
let B = new voting;
let C = new voting;
A.vote = 0;
B.vote = 0;
C.vote = 0;
while(true)
{
    console.log("No: 1  | Candidate Name: A");
    console.log("No: 2  | Candidate Name: B");
    console.log("No: 3  | Candidate Name: C");
    let No = prompt('Enter Your Candidate No: ');
    if(No == 1)
    {
        A.vote += 1;
    }
    else if(No == 2)
    {
        B.vote += 1;
    }
    else if(No == 3)
    {
        C.vote += 1;
    }
    var check = prompt('Do you want to continue ( No --> Result key ) r ( other --> Continue Key ) ');
    if( check == "no")
    {
        break;
    }
}
console.log(A, B, C);
