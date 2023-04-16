#include <iostream>
#include "profile.hpp"

int main() {
    Profile sam ("Sam Drakkila", 30, "New York", "USA", "he/him");

//    std::cout << sam.view_profile() << std::endl;
sam.add_hobby("Jiu-jitsu");
sam.add_hobby("Reading");
sam.add_hobby("Sleeping");
std::cout << sam.view_profile() << std::endl;
sam.view_hobbies(sam.get_hobbies());

sam.remove_hobby();
sam.remove_hobby();
sam.remove_hobby();
sam.view_hobbies(sam.get_hobbies());

sam.add_hobby("listening to audiobooks and podcasts");
sam.add_hobby("reading advice columns");
sam.view_hobbies(sam.get_hobbies());




    return 0;
}
