//   synchronous prompt Configuration for geting input from User
const prompt = require('prompt-sync')();

class student
{
    constructor(name, DoB, gender, dept, CutOffMark) 
    {
        this.name = name;
        this.DoB = DoB;
        this.gender = gender;
        this.CutOffMark = CutOffMark;
        this.dept = dept;
    }
}
function getFromUser(student)
{
    let s = new student;
    s.name = prompt('What is your name?: ');
    s.DoB = prompt('What is your DoB?: ');
    s.gender = prompt('Gender M r FM ? :');
    s.CutOffMark = prompt('Cut Off Mark?: ');
    s.dept = prompt('Department: ');
    return s;
}
let stu = [];
while(true)
{
    stu.push(getFromUser(student));
    check = prompt('Do you want to continue ( No --> Result key ) r ( other --> Continue Key ) ');
    if( check == 'no')
    {
        break;
    }
}

stu.forEach(element => {
   console.log(element); 
});

