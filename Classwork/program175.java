/*
    i/p =   5
    o/p =   a   b    c   d   e
    Ascii   97               101
*/
import java.util.Scanner;

class program175
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
        char ch = 'a';

        for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
        {
            System.err.printf("%c\t",ch);
        }
        
        System.err.println();
    }
}
