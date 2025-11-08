
import java.util.*;


class program77 {
    public static void main(String args[]) 
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number : ");

        iValue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayFactors(iValue);

        sobj = null;    //important
        nobj = null;

        System.gc();  // garbage collector imp
    }
}


class Number 
{
    public void DisplayFactors(int iNo) 
    {
        int iCnt = 0;
        
        for (iCnt = 1; iCnt <= iNo / 2; iCnt++) 
        {
            if ((iNo % iCnt) == 0) 
            {
                System.out.println(iCnt);
            }
        }
    }
} //End of number class