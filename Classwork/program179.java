
/*
    i/p =   row = 4
            col = 4

    o/p =   a   b   c   d   e
*/
import java.util.Scanner;

class program170 {
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
    public void Display(int iRow, int iCol) {
        int i = 0, j = 0;
        char ch = 'a';

        for (i = 1; i <= iRow; i++) 
        {            
            for (j = 1; j <= iCol; j++, ch++) 
            {
                System.out.printf("%c\t", ch);              //Important Reset
            }
            System.out.println();
        }
    }
}
