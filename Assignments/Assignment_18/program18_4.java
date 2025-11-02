class Logic {
    void sumEvenOddDigits(int iNo) {
        int iDigit = 0;
        int iEvenDigit = 0;
        int iOddDigit = 0;
        int iSum = 0;

        while (iNo != 0) {

            iDigit = iNo % 10;
            if (iDigit % 2 == 0) {
                iEvenDigit++;
            } else {
                iOddDigit++;
            }
            iNo = iNo / 10;
        }
        iSum = iEvenDigit + iOddDigit;
        System.out.println(iSum);
    }
}

public class program18_4 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}
