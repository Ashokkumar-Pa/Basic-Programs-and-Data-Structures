//  Question link
//  https://practice.geeksforgeeks.org/problems/reverse-squared-sum/0/?category[]=Mathematical&category[]=Mathematical&problemType=full&page=1&sortBy=submissions&query=category[]MathematicalproblemTypefullpage1sortBysubmissionscategory[]Mathematical#

import javax.swing.*;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int NumberofInputs;
        Scanner scanner = new Scanner(System.in);
        NumberofInputs = scanner.nextInt();
        for (int i = 0; i < NumberofInputs; i++)
        {
            int TotalNumber = scanner.nextInt();
            int[] data = new int[TotalNumber];
            for (int j = 0; j < TotalNumber; j++) {
                data[j] = scanner.nextInt();
            }
            int sum = data[TotalNumber - 1] * data[TotalNumber - 1];
            boolean add = true;
            for (int j = TotalNumber - 2; j >= 0; j--) {
                if (add)
                {
                    sum -= data[j]*data[j];
                    add = false;
                }
                else
                {
                    sum += data[j]*data[j];
                    add = true;
                }
            }
            System.out.println(sum);
        }
    }
}
