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

let list = one;

one = insertNode(list, 30, 2);
one = insertNode(one, 1, 0);
one = insertNode(one, 6, 5);
one = deleteNode(one, 3);

let current = one;
while(current != null)
{
    console.log(current.data);
    current = current.next;
}

function insertNode(list, value, point)
{
    let count = 0;
    if(point == 0)
    {
        let newList = new node(value);
        newList.next = list;
        return newList;
    }
    else
    {
        let temp = list;
        let pre;
        while(temp != null)
        {
            if(count == point)
            {
                let num = new node(value);
                pre.next = num;
                num.next = temp;
            }
            pre = temp;
            temp = temp.next;
            count++;
        }
        return list;
    }
}

function deleteNode(list, point)
{
    if(point == 0 )
    {
        return list.next;
    }
    else
    {
        let count = 1;
        let temp = list;
        while(temp != null)
        {
            if(count == point)
            {
                temp.next = temp.next.next;
            }
            count++;    
            temp = temp.next;
        }
        return list;
    }
}   