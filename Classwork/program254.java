// hello  ->  _ello

import java.util.*;

class program249 {
    public static void main(String[] args) {

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter Your name : ");

        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sobj = strobj.Update(sobj);

        System.out.println("Updated String : " + sobj); // in case if you dont want your previous string

    }
}

class StringX {
    public String Update(String str) {

        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        return new String(Arr); // changed[not preferable]

    }
}