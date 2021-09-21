/* Write a program for the following a. display a frame with title MyFrame b. draw a
horizontal line. c. Draw one line perpendicular to other. One line parallel to other. */
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
        g.drawLine(60, 60, 400, 60); // Horizontal line
        g.drawLine(230, 60, 230, 600); // Perpenducular line
        g.drawLine(60, 600, 400, 600); // Parallel line
    }
}

class Week10_1 {
    public static void main(String[] args) {
        new MyFrame();
    }
}