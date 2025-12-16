
import java.util.*;

class program293{

    public static void main(String A[]) 
    {
        int Arr[] = {45,21,90,54,78};

        System.out.println(Arr);
        for(int iNo : Arr)          //for each loop
        {
            System.out.println(iNo);
        }

        Arrays.sort(Arr);
       System.out.println("Array after sorting : ");
       for(int iNo : Arr)          //for each loop
        {
            System.out.println(iNo);
        }
        
    }
}