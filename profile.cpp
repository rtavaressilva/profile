//
// Created by Rafael Silva on 13/04/23.
//

#include "profile.hpp"
#include <iostream>
#include <sstream>
#include <vector>

//Profile::Profile(std::string new_name, int new_age, std::string new_city,
//std::string new_country, std::string new_pronouns) {
//name = new_name;
//age = new_age;
//city = new_city;
//country = new_country;
//pronouns = new_pronouns;
//}

Profile::~Profile() {

}

/*
 * Constructor with parameters and an initialization list for class Profile
 */

Profile::Profile(std::string new_name, int new_age, std::string new_city,
                 std::string new_country, std::string new_pronouns) :
        name(new_name), age(new_age), city(new_city),
        country(new_country), pronouns(new_pronouns) {}


//void Profile::add_hobby(std::string a_hobby) {
//    hobbies.push_back(&a_hobby);
//}
    /**
 * \brief Retourne une chaine de caractere qui contient l'information d'un
 * profil
 * \return un string avec les détails d'un profil
 */
std::string Profile::view_profile() const {

        std::ostringstream os;
        os << "Profile details: " << std::endl
           << "Name: " << name << std::endl
           << "Age: " << age << std::endl
           << "City: " << city << std::endl
           << "Country: " << country << std::endl
           << "Pronouns: " << pronouns << std::endl;
        return os.str ();
}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
}

void Profile::view_hobbies(std::vector<std::string> hobbies) const {
    if (hobbies.size() <= 0) {
        std::cout << "None" << std::endl;
    } else {
std::cout << name << "'s hobbies are:" << std::endl;
    for(int i = 0; i < Profile::get_hobbies().size(); i++) {
        std::cout << hobbies[i] << std::endl;
}
        }
}

std::vector<std::string> Profile::get_hobbies() const {
    return hobbies;
}

void Profile::remove_hobby() {
    return hobbies.pop_back();
}





