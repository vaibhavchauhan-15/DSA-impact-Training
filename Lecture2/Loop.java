package Lecture2;

public class Loop {
    public static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n-1);
    }

    public static void main(String[] args) {
        // System.out.println("vaibhav");


        // System.out.println("inside for loop");
        // for(int i=0;i<10; i++){
        //     System.out.println("vaibhav");

        // }

        // for(int i=1;i<101; i=i+2){
        //     System.out.println(i);
        // }

        // int b=10;
        // System.out.println(b);
        
        // // post increament
        // b++;
        // System.out.println(b);
        // b--;
        // System.out.println(b);
        
        // // pre increament
        // ++b;
        // System.out.println(b);
        // --b;
        // System.out.println(b);
        
        // //example
        // int n=10;
        // int m= 10;
        // int c= m++ + n++;
        // System.out.println("Result :"+c);
        //  c= ++m + ++n;
        // System.out.println("Result :"+c);

        // // odd 
        // System.out.println("odd:");
        // for(int i=1;i<100; i=i+2){
        //     System.out.print(" " + i);
            
        // }
        // System.out.println();

        // // even
        // System.out.println("even");
        // for(int i=0;i<100; i=i+2){
        //     System.out.print(" " + i);
            
        // }
        // System.out.println();
        // //total sum
        // int sum =0;
        // for(int i=0;i<100; i++){
        //     sum=sum + i;
        // }
        // System.out.println("sum of all 1 to 100 is :" + sum);

        // System.out.println();

        //factorial
        // System.out.println("factorial of 5 is: " + factorial(5));
    }

}
