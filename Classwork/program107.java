
//OOP Design 

import java.util.*;


public class program107 {
    public static void main(String[] args) 
    {
        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        ArrayX aobj2 = new ArrayX(7);
        aobj2.Accept();
        aobj2.Display();
    }
}


class  ArrayX 
{
    private int Arr[];
    private int iSize;

    public ArrayX(int iNo)
    {
        System.out.println("\nInside Constructor!!\n");
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
}   //end of ArrayX class
