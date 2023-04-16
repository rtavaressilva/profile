//
// Created by Rafael Silva on 13/04/23.
//

#include <vector>
#include <iostream>
#ifndef PROFILE_PROFILE_HPP
#define PROFILE_PROFILE_HPP

class Profile {
private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;


public:
    /*
     * Default Constructor
     */
//    Profile();

    /*
     * Constructor with parameters
     */
    Profile(std::string new_name, int new_age, std::string new_city,
            std::string new_country, std::string new_pronouns = "they/them");

    virtual ~Profile();

std::string view_profile() const;
void add_hobby(std::string new_hobby);
void remove_hobby();
void view_hobbies(std::vector<std::string> hobbies) const;


std::vector<std::string> get_hobbies() const;

}; //class Profile


#endif //PROFILE_PROFILE_HPP
