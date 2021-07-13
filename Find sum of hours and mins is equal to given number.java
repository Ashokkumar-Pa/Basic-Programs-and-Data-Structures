
package com.company;

import javax.swing.*;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {

      // Assuming timing system is 24hrs
      
      // find is a given number
        int find = 5;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < Math.min(find+1-i, i == 2 ? 5:10); j++)
            {
                for (int k = 0; k < Math.min(find+1-i-j,6); k++)
                {
                    for (int l = 0; l < Math.min(find+1-i-j-k,10); l++)
                    {
                        if(i + j + k + l == find)
                        {
                            System.out.println("Hours " + i + j + " Mins " + k + l );
                        }
                    }
                }
            }
        }
    }
}
