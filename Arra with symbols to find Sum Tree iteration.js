let array = ['-', '+', 5, 3, 4];
// Parant = '+' ; Child = 3,4 
// result = 3 + 4 = 7
// parant = '-' ; child = 7(result), 5
// result(Answer) = 2
for (let index = Math.floor((array.length/2) - 1 ); index >= 0;  index--) 
{
    CallSwap(array, index, (index*2) + 1, (index*2) + 2 );
}
console.log(array[0]);
function CallSwap(array, parant, left, right)
{
    if(array[parant] == '+')
    {
        array[parant] = array[right] + array[left];
        return;
    }
    else if(array[parant] == '-')
    {
        array[parant] = array[left] - array[right];
        return;
    }
    else if(array[parant] == '*')
    {
        array[parant] = array[left] * array[right];
        return;
    }
}
