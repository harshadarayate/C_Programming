
import java.util.*;


class program249
{
    public static void main(String[] args) {
        
        int iRet = 0;
        Scanner scanobj = new Scanner(System.in); //see te concept of resource leak when object is not closed.
        
        System.out.println("Enter Your name : ");

        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        iRet = strobj.CountCapital(sobj);

        System.out.println("Occurence of Capital characters : "+ iRet);
        
    
    }
}


class StringX
{
    public int CountCapital(String str)
    {
       
        int iCnt = 0, iCount = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}