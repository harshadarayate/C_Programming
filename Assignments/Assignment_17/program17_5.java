class Logic {
    void printTable(int iNo) 
    {
        int iCnt = 0;
        int iMultiply = 1;
        for(iCnt = 1;iCnt<=iNo;iCnt++)
        {
            iMultiply = iNo*iCnt;
            System.out.print(iMultiply + "\t");
        }
        System.out.println("\n");
    }
}

public class program17_5 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}
