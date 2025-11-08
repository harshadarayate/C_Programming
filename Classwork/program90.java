import java.util.*;

class program90 {
    public static void main(String args[]) {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number : ");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();

        dobj.DisplayDigits(iValue);

        sobj = null; // important
        dobj = null;

        System.gc(); // garbage collector imp
    }
}

class Digit {
    public void DisplayDigits(int iNo) 
    {      
        int iDigit = 0;

        while (iNo != 0) 
        {
            iDigit = iNo % 10;    
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
        
    }
} // End of number class