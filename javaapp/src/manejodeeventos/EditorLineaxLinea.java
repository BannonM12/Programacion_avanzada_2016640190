/*  EDITORLINEAXLINEA Una clase para crear archivos de texto introduciendo 
* Línea por linea
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package manejodeeventos;

/**
 *
 * @author Sala2
 */

import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.Dimension;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.Panel;
import java.awt.TextArea;
import java.awt.TextField;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

//EDITOR DE LOS 5 PASOS
//PASO 1---- importar los importes :vv //interfaz y evento de accion 

import java.awt.event.ActionListener; 
import java.awt.event.ActionEvent;



//public class EditorLineaxLinea implements WindowListener {
public class EditorLineaxLinea implements ActionListener{ //PASO 2----implementar la interface
    Frame   F;
    TextArea TA;
    Panel P;
    Button B;
    TextField TF;
    GridLayout GL;
    BorderLayout BL;
    public EditorLineaxLinea(){
    F= new Frame("Editor lineaxlinea");
    TA= new TextArea();
    F.setLayout(BL= new BorderLayout());
    F.add(TA, BorderLayout.CENTER);
    P=_hacerPanel();
    B.addActionListener(this);// Paso 3  Agregar escucha para la implementacion de la interfaz acionlistener
    F.add(P, BorderLayout.SOUTH);
    F.setSize(400,300);
    F.setLocationRelativeTo(null);
    F.addWindowListener(new WindowAdapter(){
       public void windowClosing(WindowEvent we) {
        F.dispose();
        System.exit(0);
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }    
    });
    F.setVisible(true);
    }
    private Panel _hacerPanel(){
        Panel Presult= new Panel();
        Presult.setLayout(GL=new GridLayout(1,2));
        Presult.add(TF= new TextField(100));
        B=new Button("AGREGAR");
        B.setMaximumSize(new Dimension(60,20));
        Presult.add(B);//=new Button("AGREGAR"));
        return Presult;
    }
    
    public void actionPerformed(ActionEvent ae){  //PASO 4 interface ActionListener
        Boolean Bool=false;
        if(ae.getSource().equals(B)){  //PASO 5 qué vamos a hacer XDXDXDDXDDDDDDDDDD
            String S=TA.getText(),s="";
            s=(S.equals(s))?s:"\n";
            S=S+s+TF.getText();
            TA.setText(S);
            TF.requestFocus();
        }
    }
    
    public static void main(String[] args) {
        new EditorLineaxLinea();
    }

//    @Override
//    public void windowOpened(WindowEvent we) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//
//    @Override
//    public void windowClosing(WindowEvent we) {
//     
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//
//    @Override
//    public void windowClosed(WindowEvent we) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//
//    @Override
//    public void windowIconified(WindowEvent we) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//
//    @Override
//    public void windowDeiconified(WindowEvent we) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//
//    @Override
//    public void windowActivated(WindowEvent we) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//
//    @Override
//    public void windowDeactivated(WindowEvent we) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }

   
}//End class editor lineaxlinea 
//PATRON DE DISÑO ADAPTADOR
//INCORPORA OPERACIONES POR DEFECTO
/*

*/
