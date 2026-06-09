import java.util.Scanner;
class main{
    public static void main(String[] args){
        student s=new student();
        s.get_detail();
        s.display();
    }
}

abstract class detail{
    String name;
    int roll_no;
    abstract void display();
    void get_detail(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Name:");
        name=sc.next();
        System.out.println("Enter Roll No:");
        roll_no=sc.nextInt();
    }

}

class student extends detail{
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Roll No"+roll_no);
    }
}
