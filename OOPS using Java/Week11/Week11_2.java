/* Write program for the following.
a. Display text in the frame by overriding PaintComponent() method of Jpanel class.
b. Display some text in the frame with the help of a Label*/
import java.awt.*;
import javax.swing.*;
import java.awt.geom.Line2D;

class MyPanel extends JPanel {
    public void paintComponent(Graphics g) {
        g.setColor(Color.red);
        g.drawString("Text By Paint Component", 0, 20);
    }
}

class MyFrame extends JFrame {
    MyFrame() {
        MyPanel panel = new MyPanel();
        panel.setBounds(0, 0, 200, 40);
        add(panel);
        Label label = new Label("Text By Label");
        label.setBounds(0, 20, 200, 20);
        add(label);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("MyFrame");
        setBounds(0, 0, 200, 200);
        setVisible(true);
    }
}

class Week11_2 {
    public static void main(String[] args) {
        new MyFrame();
    }
}