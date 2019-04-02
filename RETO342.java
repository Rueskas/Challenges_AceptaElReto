//Rueskas
import java.util.*;

public class RETO342
{
    public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
        String input;
        String[] questions, data;
        do
        {
            input = sc.nextLine();
            if(!input.equals("0 0 0"))
            {
                data = input.split(" ");
                questions = sc.nextLine().split(" ");
                questions[0] = "null";
                if (data[0].equals(data[1]) && data[1].equals(data[2]))
                    System.out.println("LO SABE");
                else if(data[2].equals(data[0]))
                {
                    if(Arrays.asList(questions).contains(Integer.toString(Integer.parseInt(data[0])+1)))
                        System.out.println("LO SABE");
                    else
                        System.out.println("NO LO SABE");
                }
                else if(data[2].equals(data[1]))
                {
                    if(Arrays.asList(questions).contains(data[2]))
                        System.out.println("LO SABE");
                    else
                        System.out.println("NO LO SABE");
                }
        
                else
                {
                    if(Arrays.asList(questions).contains(data[2]) &&
                        Arrays.asList(questions).contains(Integer.toString(Integer.parseInt(data[2])+1)))
                        System.out.println("LO SABE");
                    else
                        System.out.println("NO LO SABE");
                }
            }
        } while(!input.equals("0 0 0"));
        
    }
}

