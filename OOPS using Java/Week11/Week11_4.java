/* Write a program to create a menu with several menu items.*/
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


class MyFrame extends JFrame {
    MyFrame() {
        JMenuBar menuBar = new JMenuBar();
        JMenu menu = new JMenu("Menu");
        menu.add(new JMenuItem("Idli"));
        menu.add(new JMenuItem("Vada"));
        menu.add(new JMenuItem("Puri"));
        JMenu subMenu = new JMenu("Dosa");
        subMenu.add(new JMenuItem("Plane dosa"));
        subMenu.add(new JMenuItem("Masala dosa"));
        menu.add(subMenu);
        menuBar.add(menu);
        setJMenuBar(menuBar);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("Menu Demo");
        setLayout(null);
        setBounds(50, 200, 300, 400);
        setVisible(true);
    }
}

class Week11_4 {
    public static void main(String[] args) {
        new MyFrame();
    }
}