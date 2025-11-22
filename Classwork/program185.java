
/*
    i/p =   row = 6
            col = 6

    o/p =   *****
            *   *
            *   *
            *****
            //frame pattern used in mysql output
           
*/
import java.util.Scanner;

class program181 {
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

        for (i = 1; i <= iRow; i++) 
            {

            for (j = 1; j <= iCol; j++) 
            {
                if ((i  == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                    System.out.print( "*\t");
                } 
                else 
                {
                    System.out.printf(" \t");
                }
            }
            System.out.println();
        }
    }
}
