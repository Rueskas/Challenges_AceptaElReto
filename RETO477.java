//TOP GAP TEAM
import java.util.Scanner;
import java.util.Arrays;

class Magic implements Comparable<Magic> 
{
    protected int innocentDamage;
    protected int villainDamage;
    protected int pos;
    
    public void setInnocentDamage(int innocentDamage)
    {
        this.innocentDamage = innocentDamage;
    }
    
    public void setVillainDamage(int villainDamage)
    {
        this.villainDamage = villainDamage;
    }
    
    public void setPos(int pos)
    {
        this.pos = pos;
    }
    
    @Override
    public int compareTo(Magic m) {
        if (this.innocentDamage < m.innocentDamage)
            return -1;
        else if (m.innocentDamage < this.innocentDamage)
            return 1;
        else
            if (this.villainDamage > m.villainDamage)
                return -1;
            else if (m.villainDamage > this.villainDamage)
                return 1;
            else
                return 0;
    }
}

public class RETO477
{
    public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
        int i, villainTotalDamage, currentVillainDamage, numberOfMagic;
        String result;

        do
        {
            villainTotalDamage = sc.nextInt();
            if (villainTotalDamage > 0)
            {
                result = "";
                numberOfMagic = sc.nextInt();
                Magic[] magicList = new Magic[numberOfMagic];
                for (i = 0; i < numberOfMagic; i++)
                {
                    magicList[i] = new Magic();
                    magicList[i].setInnocentDamage(sc.nextInt());
                    magicList[i].setVillainDamage(sc.nextInt());
                    magicList[i].setPos(i+1);
                }
                
                Arrays.sort(magicList);       
                
                i = 0;
                currentVillainDamage = villainTotalDamage;
                while (currentVillainDamage > 0 && i < numberOfMagic)
                {
                    if (result == "")               
                        result += Integer.toString(magicList[i].pos);
                    else
                        result += " " + Integer.toString(magicList[i].pos);
                    currentVillainDamage -= magicList[i].villainDamage;
                    i++;
                }
    
                if (currentVillainDamage <= 0)
                    System.out.println(result);
                else
                    System.out.println("MUERTE ESCAPA");
                            
            }
        } while (villainTotalDamage > 0);
    }
}
