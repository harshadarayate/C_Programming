class Logic {

    void displayFactors(int iNum) {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNum/2; iCnt++)
        {
            if(iNum%iCnt == 0)
            {
                System.err.println(iCnt);
            }
        }
    }

}

public class program21_3 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}
