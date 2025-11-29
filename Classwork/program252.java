// hello  ->  _ello

import java.util.*;

class program249 {
    public static void main(String[] args) {

       String sRet = null; //its a refrence
        Scanner scanobj = new Scanner(System.in); // see te concept of resource leak when object is not closed.

        System.out.println("Enter Your name : ");

        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sRet = strobj.Update(sobj);

        System.out.println("Updated String : " +sRet);

    }
}

class StringX {
    public String Update(String str) {

        
        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        String temp = new String(Arr);

        return temp;

        

    
    }
}