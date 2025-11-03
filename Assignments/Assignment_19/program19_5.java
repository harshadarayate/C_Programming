class Logic {
    void calculatePower(int iBase, int iExp) {
        int iCnt = 0;
        int iPower = 1;
        for(iCnt = 1; iCnt <= iExp; iCnt++)
        {
            iPower = iPower * iBase;
        }
        System.out.println(iPower);
    }
}

public class program19_5 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}
