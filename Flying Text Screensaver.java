// Question Link
// https://www.codeabbey.com/index/task_view/flying-text-screensaver
package com.company;
public class Main {

    public static void main(String[] args) {
        int width = 9, height  = 3, lenght = 4;
        boolean right = true, down = true, left = false, up = false;
        int x = 0, y = 0;
        int a = 0;
        while (a != 15)
        {
            a++;
            System.out.println(x + " " + y);
            if (right && down)
            {
                if (height == y + 1)
                {
                    down = false;
                    up = true;
                }
                else if (width == (x + lenght ))
                {
                    right = false;
                    left = true;
                }
                else
                {
                    x++;
                    y++;
                }
            }
            else if (up && right)
            {
                if ( y == 0)
                {
                    up = false;
                    down = true;
                }
                else if (width == (x + lenght ))
                {
                    right = false;
                    left = true;
                }
                else
                {
                    x++;
                    y--;
                }
            }
            else if(up && left)
            {
                if ( y == 0)
                {
                    up = false;
                    down = true;
                }
                else if (x == 0)
                {
                    left = false;
                    right = true;
                }
                else
                {
                    x--;
                    y--;
                }
            }
            else if (down && left)
            {
                if (height == y + 1)
                {
                    down = false;
                    up = true;
                }
                else if (x == 0)
                {
                    left = false;
                    right = true;
                }
                else
                {
                    x--;
                    y++;
                }
            }
        }
    }
}


