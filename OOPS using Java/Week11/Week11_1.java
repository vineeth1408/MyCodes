/* Write a program to create a frame by creating an object to Jframe class and include close
button to terminate the application of the frame.*/
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


class MyFrame extends JFrame {
    MyFrame() {
        JButton button = new JButton("Close!");
        button.setBounds(100, 250, 50, 50);
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                System.exit(0);
            }
        });
        add(button);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("MyFrame");
        setBounds(50, 200, 200, 200);
        setVisible(true);
    }
}

class Week11_1 {
    public static void main(String[] args) {
        new MyFrame();
    }
}