
//OOP Design 

import java.util.*;


public class program105 {
    public static void main(String[] args) 
    {
        ArrayX aobj1 = new ArrayX(5);
        System.out.println(aobj1.iSize);

        //Bad code    Need of access specifiers
        aobj1.iSize = 11;
        aobj1.Arr = null;
        ArrayX aobj2 = new ArrayX(7);
        System.out.println(aobj2.iSize);


    }
}


class  ArrayX 
{
    public int Arr[];
    public int iSize;

    public ArrayX(int iNo)
    {
        System.out.println("Inside Constructor!!");
        iSize = iNo;
        Arr = new int[iSize];
    }

    public void Accept()      //this below two are getter setter methods which should be not in main
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;
        System.out.println("Enter the elements of array : ");

        for(i = 0; i< Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int i = 0;
        System.out.println("Elements of array are : ");

        for(i = 0; i< Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
    }
}
