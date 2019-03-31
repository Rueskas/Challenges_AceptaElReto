//Sergio Ruescas
import  java.util.Scanner;
import java.util.Arrays;

public class RETO1
{
    public static int Kaprekar(String n)
    {
        int rest;
        String maxText = "", minText = "";
        char[] digits = new char[4];
        while (n.length() < 4)
            n = "0" + n;
            
        if (n.compareTo("6174") == 0)
            return 0;
            
        for (int i = 0; i < 4; i++)
        {
            digits[i] = n.charAt(i);
        }
        
        Arrays.sort(digits);
        
        for (int i = 0; i < 4; i++)
        {
            minText += digits[i];
        }
        
        for (int i = 3; i >= 0; i--)
        {
            maxText += digits[i];
        }
        
        if ( minText.compareTo(maxText) == 0)
            return 8;
        rest = Integer.parseInt(maxText)-Integer.parseInt(minText);
        
        return 1 + Kaprekar(Integer.toString(rest));
    }
    
    
    public static void main(String[] text)
    {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        String number = "";
        sc.nextLine();
        for (int i = 0; i < cases; i++)
        {
            number = sc.nextLine();
            while (number.length() < 4)
                number += "0";
            System.out.printf("%d\n", Kaprekar(number));
            
        }
        sc.close();
    }
        
}
    

