/* Create a Form to insert and retrieve the data from Database as user prefer*/
import java.sql.*;
import java.awt.*;
import java.awt.event.*;

class StudentForm extends Frame {
	private String name, id, gender, sem, address, values;
	private int joinYear;
	private Choice choice, genderChoice, joinYearChoice, semChoice;
	private TextField nameTextField, idTextField;
	private TextArea addressTextArea;
	private Label infoLabel, nameLabel, semLabel, idLabel, genderLabel, yearLabel, addressLabel;
	private Connection con;
	private Statement statement;
	private ResultSet result;
	private Button submitButton;

	StudentForm() {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			String cs = "jdbc:mysql://localhost:3308";
			con = DriverManager.getConnection(cs, "root", "");
			statement = con.createStatement();
			statement.execute("DROP DATABASE IF EXISTS university");
			statement.execute("CREATE DATABASE university");
			statement.execute("USE university");
			statement.execute("CREATE TABLE student (name VARCHAR(50), id VARCHAR(7), gender VARCHAR(6), join_year INTEGER, sem VARCHAR(4), address VARCHAR(200), PRIMARY KEY (id))");
		} catch (Exception e) {
			e.printStackTrace();
		}

		infoLabel = new Label("Info: ");
		infoLabel.setBounds(100, 100, 300, 20);
		add(infoLabel);

		choice = new Choice();
		choice.setBounds(100, 120, 200, 20);
		choice.add("Select operation");
		choice.add("View student data");
		choice.add("Insert student data");
		choice.add("Update student data");
		choice.add("Remove student data");
		add(choice);
		choice.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent ie) {
                int chose = choice.getSelectedIndex();

                nameTextField.setText("");
                idTextField.setText("");
                genderChoice.select("Male");
                joinYearChoice.select("2018");
                semChoice.select("E1S1");
                addressTextArea.setText("");

                if (chose == 0) {
                    updateUI("Select operation", "SUBMIT", false, false);
                } else if(chose == 1) {
                    updateUI("Enter id and submit for details", "VIEW STUDENT", true, false);
                } else if(chose == 2) {
                    updateUI("Insert details and submit to insert", "INSERT STUDENT", true, true);
                } else if(chose == 3) {
                    updateUI("Update details and submit to update", "UPDATE STUDENT", true, true);
                } else {//5
                    updateUI("Enter id and submit to delete", "REMOVE STUDENT", true, false);
                }
            }
        });

        nameLabel = new Label("Name: ");
        nameLabel.setBounds(100, 140, 200, 20);
        add(nameLabel);

        nameTextField = new TextField();
        nameTextField.setBounds(100, 160, 200, 20);
        add(nameTextField);		

        idLabel = new Label("Id: ");
        idLabel.setBounds(100, 180, 200, 20);
        add(idLabel);

        idTextField = new TextField();
        idTextField.setBounds(100, 200, 200, 20);
        add(idTextField);

        genderLabel = new Label("Gender: ");
        genderLabel.setBounds(100, 220, 200, 20);
        add(genderLabel);

        genderChoice = new Choice();
        genderChoice.setBounds(100, 240, 200, 20);
        genderChoice.add("Male");
        genderChoice.add("Female");
        genderChoice.add("Other");
        add(genderChoice);

        yearLabel = new Label("Join year: ");
        yearLabel.setBounds(100, 260, 200, 20);
        add(yearLabel);

        joinYearChoice = new Choice();
        joinYearChoice.setBounds(100, 280, 200, 20);
        for (int i=2008; i<=2020; i++) joinYearChoice.add(""+i);
        add(joinYearChoice);

        semLabel = new Label("semester: ");
        semLabel.setBounds(100, 300, 200, 20);
        add(semLabel);

        semChoice = new Choice();
        semChoice.setBounds(100, 320, 200, 20);
        for (int i=1; i<=4; i++)
            for (int j=1; j<=2; j++) 
                semChoice.add("E"+i+"S"+j);
        add(semChoice);

        addressLabel = new Label("address: ");
        addressLabel.setBounds(100, 340, 200, 20);
        add(addressLabel);

        addressTextArea = new TextArea();
        addressTextArea.setBounds(100, 360, 200, 200);
        add(addressTextArea);

        submitButton = new Button("SUBMIT");
        submitButton.setBounds(100, 560, 200, 20);
        add(submitButton);
        submitButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                try {
                    if (submitButton.getLabel().equals("INSERT STUDENT")) {
                        getFormValues();
                        result = statement.executeQuery("SELECT * FROM student WHERE id = '"+id+"'");
                        if (result.next()) {
                            alert(" already exists!");
                        } else {
                            values = "'"+name+"', '"+id+"', '"+gender+"', "+joinYear+", '"+sem+"', '"+address+"'";
                            statement.executeUpdate("INSERT INTO student VALUES ("+values+")");
                            alert(" inserted!");
                        }
                    } else if (submitButton.getLabel().equals("UPDATE STUDENT")) {
                        getFormValues();
                        result = statement.executeQuery("SELECT * FROM student WHERE id = '"+id+"'");
                        if (!result.next()) {
                            alert(" not found!");
                        } else {
                            values = "name='"+name+"', id='"+id+"', gender='"+gender+"', join_year="+joinYear+", sem='"+sem+"', address='"+address+"'";
                            statement.executeUpdate("UPDATE student SET "+values+" WHERE id = '"+id+"'");
                            alert(" updated!");
                        }
                    } else if (submitButton.getLabel().equals("REMOVE STUDENT")) {
                        getFormValues();
                        result = statement.executeQuery("SELECT * FROM student WHERE id = '"+id+"'");
                        if (!result.next()) {
                            alert(" not found!");
                        } else {
                            statement.executeUpdate("DELETE FROM student WHERE id = '"+id+"'");
                            alert(" deleted!");
                        }
                    } else {// VIEW STUDENT
                        getFormValues();
                        getDBValues(id);
                        setFormValues();
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });

        updateUI("Select operation", "SUBMIT", false, false);

        setTitle("Student Form");
        setBounds(50, 50, 400, 600);
        setLayout(null);
        addWindowListener( new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                try {
                    con.close();
                } catch (Exception e) {
                    e.printStackTrace();
                }
                System.exit(0);
            }
        });
        setVisible(true);
	}

	private void getFormValues() {
		name = nameTextField.getText();
		id = idTextField.getText();
		gender = genderChoice.getItem(genderChoice.getSelectedIndex());
		joinYear = 2008 + joinYearChoice.getSelectedIndex();
		sem = semChoice.getItem(semChoice.getSelectedIndex());
		address = addressTextArea.getText();
	}

	private void setFormValues() {
		nameTextField.setText(name);
		idTextField.setText(id);
		genderChoice.select(gender);
		joinYearChoice.select(joinYear+"");
		semChoice.select(sem);
		addressTextArea.setText(address);
	}

	private void getDBValues(String id) {
		try {
			result = statement.executeQuery("SELECT * FROM student WHERE id = '"+id+"'");
			if (!result.next()) {
				alert(" not found!");
			} else {
			 	name = result.getString("name");
				this.id = result.getString("id");
				gender = result.getString("gender");
				joinYear = result.getInt("join_year");
				sem = result.getString("sem");
				address = result.getString("address");
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	private void alert(String msg) {
		String str = "Record with id: "+id+msg;
		Dialog dialog = new Dialog(StudentForm.this , "Acknowledge Dialog", true);
        dialog.setLayout( new FlowLayout() );
        Button button = new Button ("OK");
        button.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent aae ) {
                dialog.setVisible(false);
            }
        });
        dialog.add( new Label (str));
        dialog.add(button);
        dialog.setBounds(150, 200, 200, 100);
        dialog.setVisible(true);
	}

	private void updateUI(String infTxt, String btnTxt, boolean id, boolean others) {
		infoLabel.setText("Info: "+infTxt);
		submitButton.setLabel(btnTxt);
		nameTextField.setEnabled(others);
		idTextField.setEnabled(id);
		genderChoice.setEnabled(others);
		joinYearChoice.setEnabled(others);
		semChoice.setEnabled(others);
		addressTextArea.setEnabled(others);
		submitButton.setEnabled(id);
	}
}

class Week12_3 {
    public static void main(String[] args) {
		new StudentForm();
	}
}