/* Create an application to display a circle within rectangle and fill different colors in the
circle & rectangle*/
import java.awt.*;
import javax.swing.*;
import java.awt.geom.Line2D;

class MyFrame extends JFrame {
    MyFrame() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("MyFrame");
        setBounds(20, 100, 500, 620);
        setVisible(true);
    }

    public void paint(Graphics g) {
        g.setColor(Color.red);
        g.fillRect(60, 60, 300, 200);
        g.setColor(Color.yellow);
        g.fillOval(60, 60, 200, 200);
    }
}

class Week10_2 {
    public static void main(String[] args) {
        new MyFrame();
    }
}