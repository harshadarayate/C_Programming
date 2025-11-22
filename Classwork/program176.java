/*
    i/p =   5
    o/p =   A   B   C   D   E
    Ascii   65  66  67  68  69
*/
import java.util.Scanner;

class program176
{
    public static void main(String a[]) 
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency : \n");
        iValue = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue);
    }
}

class pattern 
{
    public void Display(int iNo) 
    {
        int  iCnt = 0;                            
        //int i = 97;
        char ch = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
        {
            System.err.printf("%c\t",ch);
        }
        
        System.err.println();
    }
}
