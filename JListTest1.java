import java.awt.*;
import javax.swing.*;
public class JListTest1 extends JFrame
{
JListTest1()
{
setTitle("JListTest1");
DefaultListModel<string>dlm=new DefaultListModel<>();
dlm.addElement("India");
dlm.addElement("Aus");
dlm.addElement("England");
dlm.addElement("Singapore");
JList<String>list=new JList<>(dlm);
setLayout(new FlowLayout());
add(list);
setSize(350,275);
setLocationRelativeTo(null);
setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
setVisible(true);
}
public static void main(String args[])
{
new JListTest1();
}
}


