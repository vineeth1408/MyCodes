/*Create a GUI with title STUDENT which has labels roll no., name, course, gender, class,
address with textboxes for taking input from the user(without any functionality) and
checkboxes for selecting the course, radio buttons for selecting gender with appropriate
background color */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class StudentForm extends JFrame {
    StudentForm() {
        JLabel stdLabel = new JLabel("STUDENT");
        stdLabel.setBounds(120, 0, 100, 25);
        add(stdLabel);
        JLabel rnLabel = new JLabel(" Roll number: ");
        rnLabel.setBounds(0, 25, 80, 25);
        add(rnLabel);
        JTextField rnTF = new JTextField(20);
        rnTF.setBounds(80, 25, 200, 25);
        add(rnTF);
        JLabel nameLabel = new JLabel(" Name: ");
        nameLabel.setBounds(0, 50, 80, 25);
        add(nameLabel);
        JTextField nameTF = new JTextField(20);
        nameTF.setBounds(80, 50, 200, 25);
        add(nameTF);
        JLabel courseLabel = new JLabel(" Courses: ");
        courseLabel.setBounds(0, 75, 80, 25);
        add(courseLabel);
        JCheckBox courseCB1 = new JCheckBox("OOPS");
        courseCB1.setBounds(80, 75, 60, 25);
        add(courseCB1);
        JCheckBox courseCB2 = new JCheckBox("OS");
        courseCB2.setBounds(140, 75, 50, 25);
        add(courseCB2);
        JCheckBox courseCB3 = new JCheckBox("FLAT");
        courseCB3.setBounds(190, 75, 60, 25);
        add(courseCB3);
        JCheckBox courseCB4 = new JCheckBox("AI");
        courseCB4.setBounds(250, 75, 60, 25);
        add(courseCB4);
        JLabel genderLabel = new JLabel(" Gender: ");
        genderLabel.setBounds(0, 100, 80, 25);
        add(genderLabel);
        CheckboxGroup cbg = new CheckboxGroup();
        Checkbox genderCB1 = new Checkbox("Male", cbg, true);
        genderCB1.setBounds(80, 100, 60, 25);
        add(genderCB1);
        Checkbox genderCB2 = new Checkbox("Female", cbg, false);
        genderCB2.setBounds(160, 100, 100, 25);
        add(genderCB2);
        JLabel classLabel = new JLabel(" Class: ");
        classLabel.setBounds(0, 125, 80, 25);
        add(classLabel);
        CheckboxGroup cbg2 = new CheckboxGroup();
        Checkbox classCB1 = new Checkbox("013", cbg2, true);
        classCB1.setBounds(80, 125, 50, 25);
        add(classCB1);
        Checkbox classCB2 = new Checkbox("309", cbg2, false);
        classCB2.setBounds(160, 125, 50, 25);
        add(classCB2);
        Checkbox classCB3 = new Checkbox("311", cbg2, false);
        classCB3.setBounds(240, 125, 50, 25);
        add(classCB3);
        JLabel addrLabel = new JLabel(" Address: ");
        addrLabel.setBounds(0, 150, 80, 25);
        add(addrLabel);
        TextArea addrTA = new TextArea();
        addrTA.setBounds(80, 150, 200, 100);
        add(addrTA);
        setTitle("STUDENT");
        getContentPane().setBackground(Color.YELLOW);
        setLayout(null);
        setSize(300, 300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }
}

class Week10_5 {
    public static void main(String[] args) {
		new StudentForm();
	}
}