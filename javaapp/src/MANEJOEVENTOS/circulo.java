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
public class circulo implements Formula {
    double radio;
    public circulo(double r){
        radio=r;
    }
public double area(){
    return Math.PI*radio*radio;
}    
}
