/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package herenciayreutilizacion;

import java.awt.Dialog;
import java.awt.Button;
import java.awt.Checkbox;
import java.awt.Dimension;
import java.awt.Frame;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.Window;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import javafx.scene.control.CheckBox;
import javax.swing.JButton;
import javax.swing.JDialog;
import java.awt.event.ActionListener; 
import java.awt.event.ActionEvent;


/**
 *
 * @author Brandon
 */
public class MyDialog {
//Dialog D;
JDialog D;
Checkbox CB1,CB2,CB3,CB4,CB5;
Button Bc,Ba;
Frame F;
GridBagLayout caracol;

public MyDialog(Frame fame){
D = new JDialog(D,"Tipo de eleccion");
CB1 = new Checkbox("Presidente");
CB2 = new Checkbox("Gobernador");
CB3 = new Checkbox("Ministro");
CB4 = new Checkbox("Delegado");
CB5 = new Checkbox("Senador");
Bc= new Button("Cancel");
Ba= new Button("Aceptar");
caracol= new GridBagLayout();
//GridBagLayout    colocar el check box y los botones a tra´ves del gridbackloyout
D.setSize(500,400);
D.setLocationRelativeTo(null);
CB1.setVisible(true);
CB2.setVisible(true);
CB3.setVisible(true);
CB4.setVisible(true);
CB5.setVisible(true);
//CB.setLocationRelativeTo(null);
Bc.setVisible(true);
Bc.setMaximumSize(new Dimension(60,20));
//Bc.addActionListener(new Listenboton());
//Bc.setLocationRelativeTo(null);
//F= new Frame("Editor lineaxlinea");
//Ba.setLocationRelativeTo(null);
Ba.setVisible(true);
Ba.setMaximumSize(new Dimension(60,20));
//Ba.addActionListener(new Listenboton());
D.add(Bc);
D.add(Ba);
D.add(CB1);
D.add(CB2);
D.add(CB3);
D.add(CB4);
D.add(CB5);
D.addWindowListener(new WindowAdapter(){
    public void windowClosing(WindowEvent we){
        D.dispose();
        //System.exit(0);  
    } 
});

GridBagConstraints c = new GridBagConstraints();
D.setLayout(caracol);
 caracol.addLayoutComponent(CB1, null);
 caracol.addLayoutComponent(Ba, null);
 caracol.addLayoutComponent(Bc, null);
 caracol.addLayoutComponent(CB2, null);
 caracol.addLayoutComponent(CB3, null);
 caracol.addLayoutComponent(CB4, null);
 caracol.addLayoutComponent(CB5, null);
 
 c.weightx = 0.5;
 c.gridwidth = 3;
 c.gridx = 0;
 c.gridy = 0;
 c.ipadx=50;
 caracol.setConstraints(CB1, c);

 
 c.weightx = 0.5;  
 c.gridwidth = 3;
 c.gridx = 0;
 c.gridy = 1;
 c.ipadx=50;
 caracol.setConstraints(CB2, c);
 
 c.weightx = 0.5;
 c.gridwidth = 3;
 c.gridx = 0;
 c.gridy = 2;
 c.ipadx=50;
 caracol.setConstraints(CB3, c);
 
 c.weightx = 0.5;
 c.gridwidth = 3;
 c.gridx = 0;
 c.gridy = 3;
 c.ipadx=50;
 caracol.setConstraints(CB4, c);
 
 c.weightx = 0.5;
 c.gridwidth = 3;
 c.gridx = 0;
 c.gridy = 4;
 c.ipadx=50;
 caracol.setConstraints(CB5, c);
 
 c.weightx = 0.5;
 c.gridwidth = 3;
 c.gridx = 1;
 c.gridy = 1;
 c.ipadx=30;
 caracol.setConstraints(Ba, c);
 
 
 c.weightx = 0.5;
 c.gridwidth = 3;
 c.gridx = 2;
 c.gridy = 1;
 c.ipadx=30;
 caracol.setConstraints(Bc, c);
 
 
D.setModal(true);
D.setVisible(true);
 //caracol.addLayoutComponent(CheckBox CB);
 //caracol.addLayoutComponent(CB);
//Ba.addActionListener(this);
}

    public static void main(String[] args) {
        String cargos[]=null;
        System.out.println("jajaja");
    }
}

//class Listenboton implements ActionListener{
//    void escribir(){    
//    System.out.println("Se ha oprimido algún botón");
//    }
//    Listenboton(){
//       escribir();
//    }
//
//    @Override
//    public void actionPerformed(ActionEvent e) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
//};

    