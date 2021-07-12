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
        four.next = two;
        five.next = null;
        System.out.println("Is a Cycled data? " + hasCycle(one));
    }

    static boolean hasCycle(node single)
    {
        node doubles = single.next;
        while (true)
        {
            if (single == doubles)
            {
                return true;
            }
            else
            {
                if (doubles.next == null || doubles.next.next == null)
                {
                    return false;
                }
                doubles = doubles.next.next;

                single = single.next;
            }

        }
    }
}
class node
{
    int data;
    node next = null;
}
