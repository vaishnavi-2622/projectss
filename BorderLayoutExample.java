import java.awt.*;
import javax.swing.*;
public class BorderLayoutExample
{
Jframe f;
BorderLayoutExample()
{
f=new Jframe("BorderLayoutExample");
JButton b1=new JButton("North");
JButton b2=new JButton("South");
JButton b3=new JButton("East");
JButton b4=new JButton("West");
JButton b5=new JButton("Center");
f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
f.add(b5);
f.obj=new(BorderLayout.b1);
f.obj=new(BorderLayout.b2);
f.obj=new(BorderLayout.b3);
f.obj=new(BorderLayout.b4);
f.obj=new(BorderLayout.b5);

public static void main(String[] args);
f.setLayout(new BorderLayout(3,3));
f.setSize(300,300);
f.setVisible(true);
}
}
