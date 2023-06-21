//song.hpp
#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  Song(std::string new_title, std::string new_artist);
  // Add a destructor here:
  ~Song();
  
  std::string get_title();
  
  std::string get_artist();
  
};

//song.cpp
#include <iostream>
#include "song.hpp"

Song::Song(std::string new_title, std::string new_artist) 
  : title(new_title), artist(new_artist) {}

// add the Song destructor here:
Song::~Song() {
  std::cout << "Goodbye " << Song.get_title() << std::endl;
}


std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}
