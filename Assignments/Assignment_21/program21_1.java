class Logic {
    void productOfDigits(int iNum) {
        int iDigit = 0;
        int iProduct = 1;

        while (iNum != 0) {
            iDigit = iNum % 10;
            iProduct = iProduct * iDigit;
            iNum = iNum / 10;

        }
        System.out.println(iProduct + " is the product number!!");

    }
}

public class program21_1 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}
