import java.util.*;

class program90 {
    public static void main(String args[]) {
        int iValue = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number : ");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();

        iRet = dobj.SumDigits(iValue);

        System.out.println("Addition is " + iRet);
        sobj = null; // important
        dobj = null;

        System.gc(); // garbage collector imp
    }
}

class Digit {
    public int SumDigits(int iNo) {
        int iDigit = 0;
        int iSum = 0;
        while (iNo != 0) {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        return iSum;

    }
} // End of number class