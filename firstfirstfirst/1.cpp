// i'll explain all what i learn with comment lines, thats my first c++ gtk code.

// includes a gtk libary
#include <gtkmm.h>

// creates main function
int main(int argc, char* argv[]) {
    // gives unique id for our app
    auto app = Gtk::Application::create(argc, argv, "org.deneme.pencere"); // means like "org.example.window"

    // create the window
    Gtk::Window window;
    window.set_title("İlk Pencere!");  // this is turkish, means "First Window!" in english
    // set the size of our window
    window.set_default_size(400, 300);
    // run that fucking app
    return app->run(window);
}