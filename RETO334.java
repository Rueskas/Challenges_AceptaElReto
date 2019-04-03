//Rueskas
import java.util.Scanner;

public class RETO334
{
    public static void checkTermination(String termination)
    {
        switch(termination)
        {
            case "IX":
                    System.out.println("GALO");
                break;
            case "US":
            case "UM":
                    System.out.println("ROMANO");
                break;
            case "IC":
                    System.out.println("GODO");
                break;
            case "AS":
                    System.out.println("GRIEGO");
                break;
            case "AF":
                    System.out.println("NORMANDO");
                break;
            case "IS":
            case "OS":
            case "AX":
                    System.out.println("BRETON");
                break;
            case "EZ":
                    System.out.println("HISPANO");
                break;
        }
    }
    
    
    public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
        int cases;
        String name, termination;
        String[] terminations = {"IX", "US", "UM", "IC", "AS", "AF", 
            "IS", "OS", "AX", "EZ"};
        boolean picto;
        cases = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < cases; i++)
        {
            name = sc.nextLine();
            picto = false;
            if(name.length()>1)
            {
                if(name.length() > 2)
                {
                    if(name.substring(0,3).equals("MAC"))
                        picto = true;
                }
                termination = name.substring(name.length() - 2);
                
                for (int j = 0; j < terminations.length; j++)
                {
                    if(terminations[j].equals(termination))
                    {
                        if(picto)
                        {
                            System.out.println("MULATO");
                            break;
                        }
                        else
                        {
                            checkTermination(termination);
                            break;
                        }
                    }
                    else if (j == terminations.length-1)
                    {
                        if(name.substring(name.length() - 1).equals("A") && picto)
                        {
                            System.out.println("MULATO");
                        }
                        else if(name.substring(name.length() - 1).equals("A"))
                            System.out.println("INDIO");
                        else if (picto)
                        {
                            System.out.println("PICTO");
                        }
                        else
                            System.out.println("PLUS ULTRA");
                    }
                }
            }
            else 
            {
                if(name.equals("A"))
                    System.out.println("INDIO");
                else
                    System.out.println("PLUS ULTRA");
            }
        }
    }
}

