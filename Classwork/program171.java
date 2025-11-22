/*
    i/p =   5
    o/p =   a   b    c   d   e
    Ascii   97               101

    we should not use ascii value in code becoz it lesser the readability if the code 
*/
import java.util.Scanner;

class program171
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
        int i = 96;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.err.printf("%d\t",i+iCnt);
        }
        System.err.println();
    }
}
