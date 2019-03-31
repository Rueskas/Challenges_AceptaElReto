//Rueskas
import java.util.*;

public class RETO383
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int cases, pages,min, reach;
        int[] jumps;

        cases = sc.nextInt();
        sc.nextLine();

        for (int c = 0; c < cases; c++)
        {
            pages = sc.nextInt();
            jumps = new int[pages];
            for (int i = 0; i < pages; i++)
            {
                jumps[i] = sc.nextInt();
            }
            min = jumps[pages - 1];
            reach = jumps[pages - 2] - jumps[pages - 1];
            
            for (int i = pages-2; i >= 0; i--)
            {
                if(jumps[i] < min)
                    min = jumps[i];
                else if (jumps[i] - min > reach)
                    reach = jumps[i] - min;
            }
            System.out.println(reach);
        }
    }
}
