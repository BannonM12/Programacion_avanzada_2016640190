/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package herenciayreutilizacion;

import java.awt.Frame;
import java.awt.Menu;
import java.awt.MenuBar;
import java.awt.MenuItem;
import java.awt.event.ActionEvent;
import java.awt.event.WindowEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.ActionListener;
import javax.swing.JFrame;

/**
 *
 * @author Brandon
 */
public class VentanaPrincipal {
    JFrame F;
    MenuBar MB;
    Menu M;
    MenuItem MIAbrir;
    MenuItem MITipo;
    MyDialog MD;
 public VentanaPrincipal(String str){
     F= new JFrame(str);
     F.setMenuBar(MB =new MenuBar());
     MB.add(M=new Menu("Archivo") );
     M.addSeparator();
     M.add(MIAbrir= new MenuItem("Abrir"));
     M.addSeparator();
     M.add(MITipo= new MenuItem("Tipo de votación"));
     M.addSeparator();
     MITipo.addActionListener(new ListenMITipo());
     F.addWindowListener(new WindowAdapter(){   //PASO 3 de 5 PARA WIODW LO¡ISTENER
      public void WindowClosing(WindowEvent wee){
          F.dispose();
          System.exit(0);
          
      }
     });
     F.setSize(400, 300);
     F.setVisible(true);
 }
    class ListenMITipo implements ActionListener{ //2/5  Action Listener
      public void actionPerformed (ActionEvent ae){
          MD= new MyDialog (F);
      }
    }
    
    public static void main(String[] args) {
        new VentanaPrincipal("Ventana Principal");
    }
}
