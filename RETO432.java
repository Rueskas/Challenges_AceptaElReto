//Sergio Ruescas
import java.util.Scanner;

public class RETO332
{
    public static int canGoInside(char[][] map, int row, int column)
    {
        if (row < 0 || row >= map.length || column < 0 || 
            column >= map[0].length || map[row][column] == '*'
                || map[row][column] == ' ')
            return 1;
            
        else if (map[row][column] == 'F')
            return 0;
            
        else
        {
            map[row][column] = ' ';
            return 1 * canGoInside(map, row-1, column) 
                     * canGoInside(map, row+1, column)
                     * canGoInside(map, row, column-1)
                     * canGoInside(map, row, column+1);
        }
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int rows, columns, rowS = 0, columnS = 0;
        int inside;
        while(sc.hasNextLine())
        {
            rows = sc.nextInt();
            columns = sc.nextInt();
            
            sc.nextLine();
            char[][] map = new char[rows][columns];
            for (int i = 0; i < rows; i++)
            {
                String line = sc.nextLine().toUpperCase();
                
                for (int j = 0; j < columns; j++)
                {
                    map[i][j] = line.charAt(j);
                    if (map[i][j] == 'S')
                    {
                        rowS = i;
                        columnS = j;
                    }
                }
            }
            inside = canGoInside(map, rowS, columnS);
            if ( inside == 0)
                System.out.println("SI");
            else
                System.out.println("NO");
        }
        
        
    }
}
