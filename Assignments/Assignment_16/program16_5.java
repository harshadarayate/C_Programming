class Logic {
    void countDigits(int iNo) {
        int iDigit = 0;
        int iCnt = 0;
        while (iNo != 0) 
        {
            iDigit = iNo % 10;
            iCnt++;
            iNo = iNo / 10;
        }
        System.out.println(iCnt);
    }
}

class program16_5 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}