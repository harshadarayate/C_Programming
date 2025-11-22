
/*
    i/p =   row = 4
            col = 4

    o/p =   
           
*/
import java.util.Scanner;

class program193 
{
    public static void main(String a[]) {
        int iValue1 = 0, iValue2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : \n");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Number of Columns : \n");
        iValue2 = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue1, iValue2);
    }
}

class pattern {
    public void Display(int iRow, int iCol) 
    {
        int i = 0, j = 0;

       
        if(iRow != iCol)            
        {
            System.out.println("invalid input\n");
            System.out.println("Row number and Column number should be same");

            return;         
        }
        for (i = 1; i <= iRow; i++) 
        {

            for (j = 1; j <= iCol; j++) 
            {
                if (i  == j )
                {
                    System.out.print( "%\t");          
                } 
                else if(i > j)
                {
                    System.out.printf("*\t");
                }
                else
                {
                    System.out.printf("#\t");
                }
            }
            System.out.println();
        }
    
    
    }
}
