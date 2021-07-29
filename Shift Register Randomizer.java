// Question Link
// https://www.codeabbey.com/index/task_view/shift-register-randomizer

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Bits Size :: ");
        int bitSize = scanner.nextInt();
        int numBits[] = new int[bitSize];

        d2b(numBits, 1);

        System.out.print("Enter XOR number :: ");
        int xorNumber = scanner.nextInt();
        int xorBits[] = new int[bitSize];
        d2b(xorBits, xorNumber);
        int count = (int) Math.pow(2, bitSize) - 1;
        while (true)
        {
            int digit = check(numBits, xorBits);
            if (digit == 1 && count == 1)
            {
                System.out.println(xorNumber);
                break;
            }
            if(count == 0 || digit == 1)
            {
                xorNumber++;
                d2b(xorBits, xorNumber);
                d2b(numBits, 1);
                count = (int) Math.pow(2, bitSize);
            }
            count--;
        }
    }
    static void d2b(int array[], int num)
    {
        for (int i = array.length - 1; i >= 0 ; i--) {
            array[i] = num % 2;
            num = num / 2;
        }
    }
    static int check(int[] numArr, int[] xorArr)
    {
        int zero = 0;
        for (int i = 0; i < xorArr.length; i++) {
            if (xorArr[i] == 1 )
            {
                zero++;
                if (numArr[i] == 1)
                {
                    zero++;
                }
            }
        }
        int first = 0;
        if (zero % 2 != 0 )
        {
            first = 1;
        }
        for (int i = numArr.length -1; i > 0; i--) {
            numArr[i] = numArr[i - 1];
        }
        numArr[0] = first;

        int digit = 0;
        for (int i = 0; i < numArr.length; i++) {
            digit += (numArr[i] * Math.pow(2, numArr.length - 1 - i));
        }
        return digit;
    }
}
