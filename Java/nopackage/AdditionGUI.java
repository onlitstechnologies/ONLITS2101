import java.awt.*;

public class AdditionGUI {
    Label lblaugend, lbladdend, lblsum;
    TextField txtaugend, txtaddend, txtsum;
    Button btnadd;

    AdditionGUI() {
        Frame addition = new Frame("Addition Program");
        addition.setVisible(true);
        addition.setSize(500, 500);
        addition.setLayout(new FlowLayout());
        lblaugend = new Label("Augend");
        addition.add(lblaugend);
        txtaugend = new TextField(10);
        addition.add(txtaugend);
    }

    public static void main(String[] args) {
        new AdditionGUI();
    }
}
