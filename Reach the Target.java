//  Question Link 
//  https://practice.geeksforgeeks.org/problems/reach-the-target/0/?category[]=Mathematical&category[]=Mathematical&problemType=full&page=1&sortBy=submissions&query=category[]MathematicalproblemTypefullpage1sortBysubmissionscategory[]Mathematical

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
        int Strat ;
        int End ;
        int Gump ;
        int TotalGumpCount;
        int GumpCount = 0 ;
        Strat = scanner.nextInt();
        Gump = scanner.nextInt();
        End = scanner.nextInt();
        TotalGumpCount = scanner.nextInt();
        while (true)
        {
            if (Strat == End) {
                if ((TotalGumpCount % 2 == 0 && GumpCount % 2 == 0) || (TotalGumpCount % 2 != 0 && GumpCount % 2 != 0))
                {
                    System.out.println("Yes, It's Possible");
                    break;
                }
                System.out.println("No, It's Impossible");
                break;
            }
            Strat  += Gump;
            GumpCount++;
        }
    }
	}
}
