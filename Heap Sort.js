let array = [2,5,7,11,3,6,9,10];
// Tree iteration
for (let index = (array.length / 2) - 1; index >= 0;  index--) 
{
    CallSwap(array, index, (index*2) + 1, (index*2) + 2 );
    console.log(array);
}
console.log(array);
function CallSwap(array, current, left, right )
{
    if(right < array.length && left < array.length)
    {
        console.log("With in Limit");
        if(array[current] > array[right] && array[current] > array[left])
        {
            console.log("No changes");
            return ;
        }
        else if(array[current] < array[right] && array[current] > array[left] )
        {
            console.log( "Swapping " + array[current], array[right] );
            let temp = array[current];
            array[current] = array[right];
            array[right] = temp;
            CallSwap(array, right, (right*2) + 1, (right*2) + 2);
        }
        else if(array[current] > array[right] && array[current] < array[left] )
        {
            console.log( "Swapping " + array[current], array[left] );
            let temp = array[current];
            array[current] = array[left];
            array[left] = temp;
            CallSwap(array, left, (left*2) + 1, (left*2) + 2);
        }
        else if( array[left] < array[right] )
        {
            console.log( "Swapping " + array[current], array[right] );
            let temp = array[current];
            array[current] = array[right];
            array[right] = temp;
            CallSwap(array, right, (right*2) + 1, (right*2) + 2);
        }
        else
        {
            console.log( "Swapping " + array[current], array[left] );
            let temp = array[current];
            array[current] = array[left];
            array[left] = temp;
            CallSwap(array, left, (left*2) + 1, (left*2) + 2);
        }
    }
    else if(right >= array.length && left < array.length)
    {
        console.log("Right limit exceed");
        if(array[current] > array[left])
        {
            console.log("no changes");
            return ;
        }
        console.log("Swapping " + array[current], array[left]);
        let temp = array[current];
        array[current] = array[left];
        array[left] = temp;
    }
}
