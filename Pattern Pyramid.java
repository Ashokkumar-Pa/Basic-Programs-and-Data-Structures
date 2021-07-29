public class Main {

    public static void main(String[] args) 
    {
        int num = 7;
        for (int i = 1; i <= num ; i++)
        {
            int diff = num-1;
            int value = i;
            for(int j =1 ; j <= i; j++)
            {
                System.out.print(value + " ");
                value += diff;
                diff--;
            }
            System.out.println();
        }
    }
}
