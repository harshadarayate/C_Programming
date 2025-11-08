import java.util.*;

class program89 {
    public static void main(String args[]) {
        int iValue = 0;
        long iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is " + iRet);
        sobj = null; // important
        nobj = null;

        System.gc(); // garbage collector imp
    }
}

class Number {
    public long CalculateFactorial(int iNo) {      
        int iCnt = 0;
        long iFact = 1;                                 
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iCnt = 1;
        while (iCnt <= iNo)                         // change
        {
            iFact = iFact * iCnt;
            iCnt ++;
        }
       
        return iFact;
    }
} // End of number class