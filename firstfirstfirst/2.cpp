// include the vscode's error line
#include <gtkmm.h>

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.whatisthis.bradar");

    // create the window
    Gtk::Window window;
    window.set_title("Learning labels");
    window.set_default_size(300, 100);

    // create a neck hurt label 
    Gtk::Label label;
    label.set_text("cpp suka");

    // add label to window
    window.add(label);

    // show the label
    label.show();

    // bimbimbambam
    return app->run(window);
}