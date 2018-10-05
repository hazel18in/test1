import java.io.*;
import java.util.ArrayList;

class ArrayList_Test{
    
public static void main (String[] args) {
    /* code */

    ArrayList test = new ArrayList();
    System.out.println("The new array list created");
    test.add("Delhi");
    test.add("Mumbai");
    test.add("Chennai");
    test.add("Kolkata");
    test.add("Chennai");
    System.out.println("The size of the array list is = " + test.size());
    System.out.println("The list is = " + test);
    test.remove("Chandigarh");
    System.out.println("The size of the array list after removal is = " + test.size());
    System.out.println("The list is = " + test);
}
}
