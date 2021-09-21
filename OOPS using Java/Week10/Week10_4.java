/*Write a small application with a default date 01/01/2000 and three combo boxes
displaying valid days, months & year (1990 – 2050). Change the displayed date with the
one chosen by user from these combo boxes.  */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.awt.geom.Line2D;
import java.util.Date;
import java.text.SimpleDateFormat;

class MyFrame extends JFrame {
    MyFrame() {
        JLabel dateLabel = new JLabel();
        Font font = new Font("Verdana", Font.PLAIN, 32);
        dateLabel.setFont(font);
        dateLabel.setText(getDateText("01", "01", "2000"));
        add(dateLabel);

        JPanel dayComboBoxPanel = new JPanel();
        String[] days = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", 
                         "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", 
                         "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"};
        JComboBox dayComboBox = new JComboBox(days);

        JPanel monthComboBoxPanel = new JPanel();
        String[] months = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};
        JComboBox monthComboBox = new JComboBox(months);

        JPanel yearComboBoxPanel = new JPanel();
        String[] years = {"1990", "1991", "1992", "1993", "1994", "1995", "1996", "1997", "1998", "1999", 
                          "2000", "2001", "2002", "2003", "2004", "2005", "2006", "2007", "2008", "2009", 
                          "2010", "2011", "2012", "2013", "2014", "2015", "2016", "2017", "2018", "2019", 
                          "2020", "2021", "2022", "2023", "2024", "2025", "2026", "2027", "2028", "2029", 
                          "2030", "2031", "2032", "2033", "2024", "2035", "2036", "2037", "2038", "2039", 
                          "2040", "2041", "2042", "2043", "2044", "2045", "2046", "2047", "2048", "2049", 
                          "2050"};
        JComboBox yearComboBox = new JComboBox(years);

        dayComboBox.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent ae ) {
                String day = dayComboBox.getSelectedItem().toString();
                String month = monthComboBox.getSelectedItem().toString();
                String year = yearComboBox.getSelectedItem().toString();
                dateLabel.setText(getDateText(day, month, year));
            }
        });

        monthComboBox.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent ae ) {

                String day = dayComboBox.getSelectedItem().toString();
                String month = monthComboBox.getSelectedItem().toString();
                String year = yearComboBox.getSelectedItem().toString();

                if (month.equals("06") || month.equals("09") || month.equals("11")) {
                    if (dayComboBox.getItemCount() == 31)
                        dayComboBox.removeItemAt(30);
                    else if (dayComboBox.getItemCount() == 28) {
                        dayComboBox.addItem("29");
                        dayComboBox.addItem("30");
                    } else if (dayComboBox.getItemCount() == 29) {
                        dayComboBox.addItem("30");
                    } 
                } else if (month.equals("02")) {
                    int intYear = Integer.parseInt(year);
                    if (((intYear%4==0)&&(intYear%100!=0))||(intYear%400==0)) {
                        if (dayComboBox.getItemCount() == 28)
                            dayComboBox.addItem("29");
                        else if (dayComboBox.getItemCount() == 30)
                            dayComboBox.removeItemAt(29);
                        else {
                            dayComboBox.removeItemAt(30);
                            dayComboBox.removeItemAt(29);
                        }    
                    } else {
                        if (dayComboBox.getItemCount() == 29)
                            dayComboBox.removeItemAt(28);
                        else if (dayComboBox.getItemCount() == 30) {
                            dayComboBox.removeItemAt(29);
                            dayComboBox.removeItemAt(28);
                        } else {
                            dayComboBox.removeItemAt(30);
                            dayComboBox.removeItemAt(29);
                            dayComboBox.removeItemAt(28);
                        }
                    }
                    
                } else {
                    if (dayComboBox.getItemCount() == 28) {
                        dayComboBox.addItem("29");
                        dayComboBox.addItem("30");
                        dayComboBox.addItem("31");
                    } else if (dayComboBox.getItemCount() == 29) {
                        dayComboBox.addItem("30");
                        dayComboBox.addItem("31");
                    } else if (dayComboBox.getItemCount() == 30) {
                        dayComboBox.addItem("31");
                    }
                }

                dateLabel.setText(getDateText(day, month, year));
            }
        });

        yearComboBox.addActionListener ( new ActionListener() {
            public void actionPerformed( ActionEvent ae ) {
                String day = dayComboBox.getSelectedItem().toString();
                String month = monthComboBox.getSelectedItem().toString();
                String year = yearComboBox.getSelectedItem().toString();
                if (month.equals("02")) {
                    int intYear = Integer.parseInt(year);
                    if (((intYear%4==0)&&(intYear%100!=0))||(intYear%400==0)) {
                        if (dayComboBox.getItemCount() == 28)
                            dayComboBox.addItem("29");
                        else if (dayComboBox.getItemCount() == 30)
                            dayComboBox.removeItemAt(29);
                        else {
                            dayComboBox.removeItemAt(30);
                            dayComboBox.removeItemAt(29);
                        }    
                    } else {
                        if (dayComboBox.getItemCount() == 29)
                            dayComboBox.removeItemAt(28);
                        else if (dayComboBox.getItemCount() == 30) {
                            dayComboBox.removeItemAt(29);
                            dayComboBox.removeItemAt(28);
                        } else {
                            dayComboBox.removeItemAt(30);
                            dayComboBox.removeItemAt(29);
                            dayComboBox.removeItemAt(28);
                        }
                    }
                    
                }
                dateLabel.setText(getDateText(day, month, year));
            }
        });

        dayComboBoxPanel.add(dayComboBox);
        add(dayComboBoxPanel);

        monthComboBoxPanel.add(monthComboBox);
        add(monthComboBoxPanel);

        yearComboBoxPanel.add(yearComboBox);
        add(yearComboBoxPanel);

        yearComboBox.setSelectedIndex(10);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("MyFrame");
        setBounds(20, 200, 500, 100);
        setLayout(new FlowLayout());
        setVisible(true);
    }

    private String getDateText(String day, String month, String year) {
        Date date = new Date(month+"/"+day+"/"+year);
        SimpleDateFormat format = new SimpleDateFormat("dd/MM/yyyy");
        return format.format(date);
    }
}

class Week10_4 {
    public static void main(String[] args) {
        new MyFrame();
    }
}