import java.lang.Math;

public class Main{
    public static void main(String[] args) { 
        int numberOne=4, numberTwo=5;
        int resultSum= numberOne+numberTwo;
        int resultRest= numberOne-numberTwo;
        int resultMult= numberOne*numberTwo;
        float resultDiv= (float)(numberOne/numberTwo); // Casteo
        int resultMod= numberOne%numberTwo;
        int resultExp= (int)(Math.pow(numberOne, numberTwo)); //Casteo
        int resultSqrt= (int)(Math.sqrt(numberOne)); //Casteo 

        System.out.println("Suma "+ resultSum);
        System.out.println("Resta "+ resultRest);
        System.out.println("Multiplicacion "+ resultMult);
        System.out.println("Division "+ resultDiv);
        System.out.println("Modulo "+ resultMod);
        System.out.println("Exponencia "+ resultExp);
        System.out.println("Raiz "+ resultSqrt);
    }
}