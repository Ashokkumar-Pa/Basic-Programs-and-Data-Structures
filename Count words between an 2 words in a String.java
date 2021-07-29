public class Main {
    public static void main(String[] args) {
        String s = "hi A, how are you!";
        String w1 = "A";
        String w2 = "you";
        char[] arr = s.toCharArray();
        int k = 0, one = 0, two = 0;
        int start = 0, end = 0;
        String[] splt = new String[10];
        for (int i = 1; i < s.length(); i++) {
            if (arr[i] >= 'a' && arr[i] <='z' || arr[i] >= 'A' && arr[i] <= 'Z')
            {
                end = i;
            }
            else if (arr[i] == ' ' || i==s.length()-1)
            {
                splt[k] = s.substring(start, end + 1);
                start = i+1;
                if (splt[k].equals(w1))
                {
                    one = k;
                }
                if (splt[k].equals(w2))
                {
                    two = k;
                    break;
                }
                k++;
            }
        }
        System.out.println((two - one - 1));
    }
}
