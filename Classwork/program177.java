/*
    i/p =   8
    o/p =   1   A   3   B   5   C   7   D
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

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                System.err.printf("%c\t",ch);
                ch++;
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
            
        }
        
        System.err.println();
    }
}
