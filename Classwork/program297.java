//vector is advanced array
// vectors in built functions

import java.util.*;

class program297{

    public static void main(String A[]) 
    {
        Vector <String> vobj = new Vector<String>();

        vobj.add("C");
        vobj.add("CPP");
        vobj.add("C#");
        vobj.add("Python");
        vobj.add("OS");
        vobj.add("C#");
        vobj.add("Python");
        vobj.add("OS");

        System.out.println(vobj);

        vobj.add(2,"Lsp");
        System.out.println(vobj);

        
        System.out.println(vobj.capacity());

        System.out.println(vobj.contains("C"));
        System.out.println(vobj.contains("Unix"));

        System.out.println(vobj.remove(5));

        System.out.println(vobj);
        Iterator iobj = vobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        vobj.clear();
        System.out.println(vobj);
    }
}