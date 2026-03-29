// include the vscode's error line
#include <gtkmm.h>
// include my baby
#include <iostream>

// fucking function
void on_button_clicked(Gtk::Label* label) {
    label->set_text("you pressed to button!");
}

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.neck.hurt");

    Gtk::Window window;
    window.set_title("Button");
    window.set_default_size(300, 200);

    // let us create an vertical box
    Gtk::Box vbox(Gtk::ORIENTATION_VERTICAL, 10);
    window.add(vbox);

    // create a label (we learned it in 2 twin)
    Gtk::Label label("waiting for your dih to press this button");
    vbox.pack_start(label);

    // create the button HELL YEAH
    Gtk::Button button("CLICK ME");
    vbox.pack_start(button);

    // if u click, fucking function klik
    button.signal_clicked().connect(sigc::bind(&on_button_clicked, &label)); // wtf is this bradar

    // make everything visible
    window.show_all_children();

    return app->run(window);
}