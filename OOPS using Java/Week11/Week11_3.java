/*Write a program to create a push button , when the button is clicked an image is
displayed in the frame. */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


class MyFrame extends JFrame {
    MyFrame() {
        JButton button = new JButton("Push!");
        button.setBounds(100, 250, 50, 50);
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                ImageIcon icon = new ImageIcon("C:/Users/Ramanakishore/Desktop/B161480/OOPS LAB/Week11/Blackhole_pic_real.jpg");
                JLabel label = new JLabel(icon);
                add(label);
                pack();
            }
        });
        add(button);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("MyFrame");
        setLayout(new BoxLayout(getContentPane(), BoxLayout.Y_AXIS));
        setBounds(50, 200, 430, 330);
        setVisible(true);
    }
}

class Week11_3 {
    public static void main(String[] args) {
        new MyFrame();
    }
}