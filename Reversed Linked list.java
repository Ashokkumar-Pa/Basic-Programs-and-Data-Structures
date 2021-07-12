//  Save Linked list reversly in to other list

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
        //System.out.println("Is a Cycled data? " + hasCycle(one));
        reverse(one);
        //print(one);
    }

    static void reverse(node root)
    {
        node prev = null;
        node reverse = null;
        while (root != null)
        {
            reverse = new node();
            reverse.data = root.data;
            reverse.next = prev;
            prev = reverse;
            root = root.next;
        }
        while (reverse != null)
        {
            System.out.println(reverse.data);
            reverse = reverse.next;
        }
    }

}
class node
{
    int data;
    node next = null;
}
