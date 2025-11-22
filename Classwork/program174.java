/*
    i/p =   5
    o/p =   a   b    c   d   e
    Ascii   97               101
*/
import java.util.Scanner;

class program174
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
        int i = 97;                             //it sould not be used here

        for(iCnt = 1; iCnt <= iNo; iCnt++,i++)
        {
            System.err.printf("%c\t",i);
        }
        
        System.err.println();
    }
}
