/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package MANEJOEVENTOS;

/**
 *
 * @author Sala2
 */



public class CUtil {
    static double longitud;
    static int elec;
    static java.util.Scanner scanner;
    static Formula InterfFormula;
    static Formula getformula(){
    System.out.println("1Cuadro, 2Círculo");
    scanner= new java.util.Scanner(System.in);
    elec=scanner.nextInt();
    switch(elec){
        case 1:{
        System.out.println("Lado");
        longitud= scanner.nextDouble();
        InterfFormula=new cuadro(longitud);
        break ;
                    }
        case 2:{
        System.out.println("Radio");
        longitud= scanner.nextDouble();
        InterfFormula=new circulo(longitud);
        break ;}    
        default:{
        System.exit(0);
        break;}
    }
    return InterfFormula;
}
}