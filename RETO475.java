//TOP GAP TEAM
import java.util.Scanner; 

public class RETO475
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        int casos = sc.nextInt();
        sc.nextLine();
        
        String name = "stanlee";
        
        for (int c = 0; c < casos; c++)
        {
            String text = sc.nextLine().toLowerCase();
            
            int cameos = 0;
            
            for(int i = 0, j = 0; i < text.length(); i++)
            {
                if (text.charAt(i) == name.charAt(j))
                {
                    j++;
                    
                    if (j == 7)
                    {
                        cameos++;
                        j = 0;
                    }
                }  
            }
            
            System.out.println(cameos);
        }
    } 
}
