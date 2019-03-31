//Sergio Ruescas
import  java.util.Scanner;

public class RETO172
{
    public static void ToBase6(int number)
    {
        int divisor, resto;
        if ( number < 6 )
        {
            System.out.printf("%d", number);
        }
        else
        {
            divisor = number / 6;
            resto = number%6;
            
            ToBase6(divisor);
            
            System.out.printf("%d", resto);
        }
        
        
    }
    public static void main(String[] text)
    {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        for (int i = 0; i < cases; i++)
        {
            int number = sc.nextInt();
            ToBase6(number);
            System.out.println();
        }
        sc.close();
    }
        
}
    

