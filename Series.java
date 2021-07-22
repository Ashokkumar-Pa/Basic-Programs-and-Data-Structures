public class Main {
    public static void main(String[] args)
    {
        int  number = 36, count = 3;
        for (int i = 0; i < count; i++)
        {
            int lastDigit,  temp = 0;
            int DigitCount = 1;
            while (number != 0)
            {
                lastDigit = number % 10;
                number = number / 10;
                if (lastDigit == number % 10 && number != 0)
                {
                    DigitCount++;
                    continue;
                }
                DigitCount = DigitCount*10;
                DigitCount += lastDigit;
                int newTemp = temp;
                while (newTemp != 0)
                {
                    DigitCount *= 10;
                    newTemp /= 10;
                }
                temp += DigitCount;
                DigitCount = 1;
                System.out.println(i + " --> " +temp);
            }
            System.out.println("Final => " +temp);
            number = temp;
        }
    }
}
