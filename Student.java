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
public class Student extends Person{
    private int idnumber;
    private String intake;
    public Student(){
        super();
    }
    
    public Student(String nameIn,String addressIn,String telephoneIn,String emailIn,int idnumberIn,String intakeIn){
           super(nameIn, addressIn, emailIn, telephoneIn);
           this.idnumber = idnumberIn;
           this.intake = intakeIn;
    }
    
    @Override
    public String getName(){
      return (super.getName());
    }
    @Override
    public void printProfile(){
        super.printProfile();
        System.out.println("Your id is"+ this.idnumber);
        System.out.println("Your intake is" + this.intake);
    }
    
    
    
    
    
    
    
    
    
    
}
