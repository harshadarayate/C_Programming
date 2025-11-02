class Logic {
    void checkSign(int iNo) {
        if (iNo == 0) {
            System.out.println("Zero");
        } else if (iNo > 0) {
            System.out.println("Positive");
        } else {
            System.out.println("Negative");
        }
    }
}

public class program18_5 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
