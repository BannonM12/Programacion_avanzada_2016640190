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
public class cuadro implements Formula{
 double lado;
 public cuadro(double lado){
 this.lado= lado;
 }
 public double area(){
     return lado*lado;
 }
}
