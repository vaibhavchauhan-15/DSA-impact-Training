package Lecture3;

import java.util.Scanner;

public class Calculator {
    private double result;

    public void add(int num1, int num2) {
        result = num1 + num2;
    }

    public void subtract(int num1, int num2) {
        result = num1 - num2;
    }

    public void multiply(int num1, int num2) {
        result = num1 * num2;
    }

    public void divide(int num1, int num2) {
        if (num2 != 0) {
            result = (double) num1 / num2;
        } else {
            System.out.println("Error: Division by zero!");
            result = 0;
        }
    }

    public double getResult() {
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Calculator calc = new Calculator();

        System.out.println("Simple Java Calculator");
        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();

        System.out.print("Enter operator (+, -, *, /): ");
        char operator = sc.next().charAt(0);

        switch (operator) {
            case '+':
                calc.add(num1, num2);
                break;
            case '-':
                calc.subtract(num1, num2);
                break;
            case '*':
                calc.multiply(num1, num2);
                break;
            case '/':
                calc.divide(num1, num2);
                break;
            default:
                System.out.println("Invalid operator!");
                sc.close();
                return;
        }

        System.out.println("Result: " + calc.getResult());
        sc.close();
    }
}
