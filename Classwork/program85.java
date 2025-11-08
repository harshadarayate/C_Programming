
import java.util.*;

class program85 {
    public static void main(String args[]) {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.CheckPerfect(iValue);

        if (bRet == true) {
            System.out.println(iValue + " is perfect number.");
        } else {
            System.out.println(iValue + " is not perfect number.");
        }

        sobj = null; // important
        nobj = null;

        System.gc(); // garbage collector imp
    }
}

class Number 
{
    public boolean CheckPerfect(int iNo) 
    {

        int iCnt = 0;
        int iSum = 0;

        if (iNo < 0) {
            iNo = -iNo;
        }
                // Reverse Loop

        for (iCnt = iNo/2; (iCnt >= 1) && (iSum < iNo); iCnt--) 
        {
            if ((iNo % iCnt) == 0) 
            {
                iSum = iSum + iCnt;
            }
        }

        return (iSum == iNo);  
    
    }
} // End of number class