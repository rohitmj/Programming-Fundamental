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
public class Person {
       private String name;
       private String address;
       private String telephone;
       private String email;
       
       
       public Person(){
           
       }
       public Person(String nameIn,String addressIn,String telephoneIn,String emailIn){
           this.name = nameIn;
           this.address = addressIn;
           this.email = emailIn;
           this.telephone = telephoneIn;
       }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getTelephone() {
        return telephone;
    }

    public void setTelephone(String telephone) {
        this.telephone = telephone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
     
    public void printProfile(){
        System.out.println("Your name is "+ this.name);
        System.out.println("Your address is "+ this.address);
        System.out.println("Your email is "+ this.email);
        System.out.println("Your telephone is "+ this.telephone);
        
    }
       
       
       
       
       
}
