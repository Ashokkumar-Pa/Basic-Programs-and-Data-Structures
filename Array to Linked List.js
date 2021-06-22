class node
{
    constructor (data)
    {
        this.data = data;
        this.next = null;
    }
}
var arr = [0,1,2,3,4];
let a = BuildList(arr);

let current = a;
while(current != null)
{
    console.log(current.data);
    current = current.next;
}
function BuildList(array)
{
    let list = new node(array[0]);
    let temp = list;
    for (let index = 1; index < array.length; index++)
    {
        let p = new node(array[index]);
        temp.next = p;
        temp = temp.next;
    }
    return list;
}
