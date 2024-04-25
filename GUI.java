//0.import awt package
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
//1.create a (extends) Frame
public class AWT extends Frame implements ActionListener{
    //2.declare UI elements
    Label UsernameLabel,noteLabel;
    TextField msg;
    Button Login;
    //3.create UI elements along with the obj
    AWT(){
        //4.intilize UI elements
        UsernameLabel = new Label("Message");
        noteLabel= new Label(" ");
        msg= new TextField("Enter name:", 25);
        Login = new Button("LOGIN");
        //4A.add action listerner
        Login.addActionListener(this);

        //5.add UI elements to frame
        this.add(UsernameLabel);
        this.add(noteLabel);
        this.add(msg);
        this.add(Login);
        //6.set frame parameters
        this.setSize(500,500);
        this.setLayout(new FlowLayout());
        this.setVisible(true);
    }
    
    public static void main(String[] args) {
        AWT obj = new AWT();
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        String note = msg.getText();
        noteLabel.setText(note);
    }
}
