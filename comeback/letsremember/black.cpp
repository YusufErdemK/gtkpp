#include <gtkmm.h>

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "com.erdamn.labels");

    Gtk::Window window;
    window.set_default_size(600, 400);
    window.set_title("Muhammedinleabdulrahman");

    Gtk::Label mohtirigatgat;
    mohtirigatgat.set_text("fernandooo");

    window.add(mohtirigatgat);
    mohtirigatgat.show();

    return app->run(window);
}

// FERNANDOOOOOOO ALOONNSOOOOOO