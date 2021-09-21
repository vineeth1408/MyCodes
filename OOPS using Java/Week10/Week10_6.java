/*  Create a GUI application to display a calculator using grid Layout (You do not have to
provide functionality)*/
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Calculator extends JFrame {
    Calculator() {
        JTextField t = new JTextField();
        t.setSize(200, 40);
        add(t);
        JPanel glp = new JPanel(new GridLayout(4, 4));
        glp.setBounds(0, 40, 200, 200);
        glp.add(new JButton("7"));
        glp.add(new JButton("8"));
        glp.add(new JButton("9"));
        glp.add(new JButton("/"));
        glp.add(new JButton("4"));
        glp.add(new JButton("5"));
        glp.add(new JButton("6"));
        glp.add(new JButton("*"));
        glp.add(new JButton("1"));
        glp.add(new JButton("2"));
        glp.add(new JButton("3"));
        glp.add(new JButton("-"));
        glp.add(new JButton("0"));
        glp.add(new JButton("."));
        glp.add(new JButton("="));
        glp.add(new JButton("+"));
        add(glp);
        setTitle("CALCULATOR");
        setSize(215, 280);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(null);
        setVisible(true);
    }
}

class Week10_6 {
    public static void main(String[] args) {
		new Calculator();
	}
}