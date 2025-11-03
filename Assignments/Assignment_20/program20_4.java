class Logic {
    void findLargestDigit(int iNum) {
        int iDigit = 0;
        int iDigitPrev = 0;
        while(iNum != 0)
        {
            iDigit = iNum % 10;
            
            if(iDigit > iDigitPrev)
            {
                iDigitPrev = iDigit;
            }
            iNum = iNum / 10;

        }
        System.out.println(iDigitPrev+ " is the greatest number!!");
    }
}

public class program20_4 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}
