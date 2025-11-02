class Logic {
    void checkPalindrome(int iNo) {
        int iDigit = 0;
        int iRev = 0;

        int iNoCopy = iNo;

        while (iNo != 0) {
            iDigit = iNo % 10;
            iRev = (iRev*10)+iDigit;
            iNo = iNo / 10;
        }
        if (iNoCopy == iRev) {
            System.out.println(iNoCopy + " is Palindrome!");
        } else {
            System.out.println(iNoCopy + " is Not Palindrome!");

        }
    }
}

class program17_2 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}