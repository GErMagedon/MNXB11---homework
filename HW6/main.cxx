#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  bool correct_num_arg{argc==3};
  if (correct_num_arg) {
    std::string program_name{argv[0]};
    char first_letter_of_1st_argument{*(argv[1])}; // *(argv[1])  would retrieve the first character of the 2nd word in input
    size_t program_name_lenght{program_name.size()};
    int second_argument{std::atoi(argv[2])}; // atoi converts second input into integer
    auto ASCII_sum{0};
    int counter{0}; //this variable works as an artificial counter for the while loop
     
    std::string first_argument{argv[1]}; // argv[1] would point to the string (to the 2nd word in input)
    
    while (true) {    // this loop adds up all of the ASCII values of symbols in a first function argument 
      ASCII_sum += first_argument[counter++];
      if (counter >= static_cast<int>(first_argument.size())) {
        break;
      }
    }
    if ((ASCII_sum ^ first_letter_of_1st_argument * 3) << (program_name_lenght & 0x1f) == second_argument) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}