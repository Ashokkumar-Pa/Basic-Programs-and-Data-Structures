const prompt = require('prompt-sync')();
// synchronous prompt Configuration for geting input from User

class student
{
    constructor(name, DoB, gender, dept, RollNO) 
    {
        this.name = name;
        this.DoB = DoB;
        this.gender = gender;
        this.RollNO = RollNO;
        this.dept = dept;
    }
}
function getFromUser()
{
    let s = new student;
    s.name = prompt('What is your name?: ');
    s.DoB = prompt('What is your DoB?: ');
    s.gender = prompt('Gender M r FM ? :');
    s.RollNO = prompt('Roll Number?: ');
    s.dept = prompt('Department: ');
    return s;
}
let stu = [];
let dept = {};
dept['civil'] = [];
dept['cs'] = [];
dept['ece'] = [];
dept['eee'] = [];
dept['mech'] =[];

while(true)
{
    let current = getFromUser();
    stu.push(current);
    dept[current.dept].push(current);
    var check = prompt('Do you want to continue ( No --> Result key ) r ( other --> Continue Key ) ');
    if( check == "no")
    {
        break;
    }
}
console.log("1 -> Name");
console.log("2 -> Date of Birth");
console.log("3 -> Gender");
console.log("4 -> Department");
console.log("5 -> All Departments");
console.log("6 -> All student list in a Department(civil, cs, ece,eee, mech)");
let select = prompt('Selection Number : ');

if(select == 1)
{
    let search = prompt('Enter Search Name : ');
    searchName(stu, search);
}
else if(select == 2)
{
    let search = prompt('Enter Search Date of Birth : ');
    searchDOB(stu, search);
}
else if(select == 3)
{
    let search = prompt('Enter Search Gender : ');
    searchGender(stu, search);
}
else if(select == 4)
{
    let search = prompt('Enter Search Department : ');
    printAllStudentsInDpt(stu, search);
}
else if( select == 5)
{
    OutAllDepts(stu);
}
else if( select == 6)
{
    let search = prompt('Enter Department Name : ');
    OutAllDeptStudents(dept, search);
}
function searchName(data, search)
{
    data.forEach(element => {
        if(search == element.name)
        {
            console.log(element);
        }
    });
}
function searchDOB(data, search)
{
    data.forEach(element => {
        if( search == element.DoB)
        {
            console.log(element);
        }
    });
}
function searchGender(data, search)
{
    data.forEach(element => {
        if( search == element.gender)
        {
            console.log(element);
        }
    });
}
function printAllStudentsInDpt(data)
{
    data.forEach(element => {
        if(search == element.dept)
        {
            console.log(element);
        }
    });
}
function OutAllDepts( data )
{
    var array = [];
    var n = 0;
    data.forEach(element => {
        var flag = true;
        var index = 0;
        for ( index = 0; index < array.length; index++) {
            if( element.dept == array[index])
            {
                flag = false;
                break;
            }
        }
        if( flag && n == array.length )
        {
            array.push(element.dept);
            n++;
        }
    });
    console.log(array);
}
function OutAllDeptStudents( data, search)
{
    let stu = data[search];
    stu.forEach(element => {
       console.log(element); 
    });
    console.log(data);
}
