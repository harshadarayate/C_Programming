
class Logic {
    void fMindMin(int iNo1, int iNo2, int iNo3) {
        if (iNo1 < iNo2) {
            if (iNo2 < iNo3) {
                System.out.println(iNo1 + " is smallest");
            } else {
                System.out.println(iNo3 + " is smallest");
            }
        } // 25 15 17
        else {
            if (iNo2 < iNo3) {
                System.out.println(iNo2 + " is smallest");

            } else {
                System.out.println(iNo3 + " is smallest");

            }
        }
    }

}

public class program17_4 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.fMindMin(10, 3, 2);
    }
}
