class Logic {
    void findSmallestDigit(int iNum) {
        int iDigit = 0;
        int iDigitPrev = 999999;
        while (iNum != 0) {
            iDigit = iNum % 10;

            if (iDigit < iDigitPrev) {
                iDigitPrev = iDigit;
            }
            iNum = iNum / 10;

        }
        System.out.println(iDigitPrev + " is the smallest number!!");

    }
}

public class program20_5 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}
