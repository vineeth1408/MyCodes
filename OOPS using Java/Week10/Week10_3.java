/*Write an application that displays any string. Choose color from combo box to change
the color of this displayed string and choose its size & type respectively from another two
combo boxes.  */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.awt.geom.Line2D;

class MyFrame extends JFrame {
    MyFrame() {
        JLabel textLabel = new JLabel();
        textLabel.setText("Hello World!"); 
        textLabel.setForeground(Color.blue);
        Font font = new Font("Verdana", Font.PLAIN, 8);
        textLabel.setFont(font);
        add(textLabel);
        
        JPanel colorComboBoxPanel = new JPanel();

        String[] colors = {"blue", "green", "yellow", "orange", "red"};
        JComboBox colorComboBox = new JComboBox(colors);
        colorComboBox.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent ae ) {
                if (colorComboBox.getSelectedItem().toString().equals("blue"))
                    textLabel.setForeground(Color.blue);
                else if (colorComboBox.getSelectedItem().toString().equals("green"))
                    textLabel.setForeground(Color.green);
                else if (colorComboBox.getSelectedItem().toString().equals("yellow"))
                    textLabel.setForeground(Color.yellow);
                else if (colorComboBox.getSelectedItem().toString().equals("orange"))
                    textLabel.setForeground(Color.orange);
                else if (colorComboBox.getSelectedItem().toString().equals("red"))
                    textLabel.setForeground(Color.red);
            }
        });

        colorComboBoxPanel.add(colorComboBox);
        add(colorComboBoxPanel);

        JPanel fontComboBoxPanel = new JPanel();

        String[] fonts = {"Verdana", "Arial", "Courier", "Serif", "Times"};
        JComboBox fontComboBox = new JComboBox(fonts);

        JPanel sizeComboBoxPanel = new JPanel();

        String[] sizes = {"8", "16", "32", "64"};
        JComboBox sizeComboBox = new JComboBox(sizes);

        fontComboBox.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent ae ) {
                Font font = new Font(fontComboBox.getSelectedItem().toString(), Font.PLAIN, Integer.parseInt(sizeComboBox.getSelectedItem().toString()));
                textLabel.setFont(font);
            }
        });
        
        fontComboBoxPanel.add(fontComboBox);
        add(fontComboBoxPanel);

        sizeComboBox.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent ae ) {
                Font font = new Font(fontComboBox.getSelectedItem().toString(), Font.PLAIN, Integer.parseInt(sizeComboBox.getSelectedItem().toString()));
                textLabel.setFont(font);
            }
        });
        
        sizeComboBoxPanel.add(sizeComboBox);
        add(sizeComboBoxPanel);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("MyFrame");
        setBounds(20, 100, 500, 620);
        setLayout(new GridLayout(20, 16));
        setVisible(true);
    }
}

class Week10_3 {
    public static void main(String[] args) {
        new MyFrame();
    }
}