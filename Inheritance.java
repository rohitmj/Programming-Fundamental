/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inheritance;

/**
 *
 * @author sunway
 */
public class Inheritance {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Person p1 = new Person("Rohit","KTM","rohit@gmail.com","9813582832");
        //p1.printProfile();
        Student s1 = new Student("MJ","BKT","mj@gmail.com","98---",20305,"September");
        s1.printProfile();
      
       
    }
    
}
