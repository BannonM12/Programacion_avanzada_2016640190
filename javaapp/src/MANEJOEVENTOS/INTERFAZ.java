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
class figurageometrica{
    Formula F;
}
public class INTERFAZ {
    public static void main(String[] args) {
        cuadro C;
        circulo Ci;
        C= new cuadro(200);
        Ci= new circulo(300);
        System.out.println("Círculo de área"+Ci.area());
        System.out.println("Cuadrado de área"+C.area());
        figurageometrica FG=new figurageometrica();
        FG.F=CUtil.getformula();
        System.out.println("figura geométrica de área"+FG.F.area());
   }
}
