#include <gtkmm.h>

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "com.erdamn.comeback");

    Gtk::Window window;
    window.set_default_size(600, 400);
    window.set_title("test");

    return app->run(window);
}

// ahh happy that i did not forget bout it