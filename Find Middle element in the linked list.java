// If the list has odd numbers of element(9) result is odd (5)
// If the list has even numbers of element(4) result is odd (3)


public class Main {

    public static void main(String[] args) {

        node one = new node();
        one.data = 10;
        node two = new node();
        two.data = 20;
        node three = new node();
        three.data = 30;
        node four = new node();
        four.data = 40;
        node five = new node();
        five.data = 50;

        one.next = two;
        two.next = three;
        three.next = four;
        four.next = five;
        five.next = null;
        System.out.println("Middle element in this list is ==> " + hasCycle(one));
    }
    // single is the 1st pointer moves one by one
    static int hasCycle(node single)
    {
      // doubles is a 2nd pointer moving two by two elements
        node doubles = single.next;
        while (true)
        {
            if (doubles.next == null || doubles.next.next == null)
            {
                return single.next.data;
            }
            doubles = doubles.next.next;
            single = single.next;
        }
    }
}
class node
{
    int data;
    node next = null;
}
