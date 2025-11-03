class Logic {

    void checkPerfect(int iNo) {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt < iNo; iCnt++) {
            if (iNo % iCnt == 0) {
                iSum = iSum + iCnt;
            }
        }
        if (iSum == iNo) {
            System.out.println(iNo + " is perfect Number\n");
        } else {
            System.out.println(iNo + " is not perfect Number\n");
        }
    }
}

public class program20_3 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}
