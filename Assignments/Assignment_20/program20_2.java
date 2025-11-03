class Logic {
    void printReverse(int iNo) {
        int iCnt = 0;
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

public class program20_2 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}
