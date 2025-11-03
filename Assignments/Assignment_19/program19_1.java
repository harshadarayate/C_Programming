class Logic {
    void checkLeapYear(int iYear) {
        if ((((iYear % 4) == 0) || ((iYear % 400) == 0)) && ((iYear % 100) != 0)) {
            System.out.println(iYear + " is a Leap Year!");
        } else {
            System.out.println(iYear + " is not a Leap Year!");
        }
    }
}

public class program19_1 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}
