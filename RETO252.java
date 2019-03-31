//Rueskas
import java.util.Scanner;

public class RETO252
{
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        boolean palindrome;
        String input, text;
        do
        {
            input = sc.nextLine();
            if(!input.equals("XXX")){
                text = input.toUpperCase().replace(" ", "");
                palindrome = true;
                for (int i = 0; i < text.length()/2; i++)
                {
                    if (text.charAt(i) != text.charAt(text.length()-1 - i)){
                        palindrome = false;
                        break;
                    }
                }
                if(palindrome)
                    System.out.println("SI");
                else
                    System.out.println("NO");
            }
        } while(!input.equals("XXX"));
    }
}
