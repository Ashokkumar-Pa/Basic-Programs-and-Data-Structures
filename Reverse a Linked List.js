class node
{
    constructor(data)
    {
        this.data = data;
        this.next = null;
    }
}
let one = new node(0);
let two = new node(1);
let three = new node(2);
let four = new node(3);
let five = new node(4);
one.next = two;
two.next = three;
three.next = four;
four.next = five;
five.next =  null;

console.log("reverse");
let rev = reverseList(one);
let current = rev;
while(current != null)
{
    console.log(current.data);
    current = current.next;
}
function reverseList(node)
{
    let prev = null;
    let current = node;
    let next = null;
    while (current != null) 
    {
        next = current.next;
        current.next = prev;
        prev = current;
        current = next;
    }
    return prev;
}