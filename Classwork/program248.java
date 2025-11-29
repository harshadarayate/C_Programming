
import java.util.*;


class program248
{
    public static void main(String[] args) {
        
        
        Scanner scanobj = new Scanner(System.in);
        
        System.out.println("Enter Your name : ");

        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        strobj.Display(sobj);
        
    
    }
}


class StringX{
    public void Display(String str)
    {
       
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }


    }
}