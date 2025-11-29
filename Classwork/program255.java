// hello  ->  _ello

import java.util.*;
import java.lang.*;

class program249 {
    public static void main(String[] args) {

        String sRet = null;
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter Your name : ");

        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sRet = sobj = strobj.toLowerCaseX(sobj);

        System.out.println("Updated String : " + sRet); 
    }
}

class StringX {
    public String toLowerCaseX(String str) {

        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for (iCnt = 1; iCnt <= Arr.length; iCnt++) 
        {
            if (Arr[iCnt] >= 'A' || Arr[iCnt] <= 'Z') 
            {
               // Arr[iCnt] = Arr[iCnt] + ((Character)32);  // wrapper class
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        return new String(Arr);
    }
}

/*
java program255.java
Enter Your name : 
hello WORLD
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 11 out of bounds for length 11
	at StringX.toLowerCaseX(program255.java:33)
	at program249.main(program255.java:18)
m
*/