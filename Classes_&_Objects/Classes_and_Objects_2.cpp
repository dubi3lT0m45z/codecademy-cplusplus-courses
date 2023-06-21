//song.hpp
#include <string>

// add the Song class here:
class Song {
  std::string title;

public:
    void add_title(std::string new_title);
    std::string get_title();
};

//song.cpp
#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title){
  title = new_title;
}

std::string Song::get_title(){
  return title;
}
