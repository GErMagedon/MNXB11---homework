#include <iostream>
#include <string>

/// @brief takes a string word as a parameter and sums ASCII values of it's letters
/// @param word 
/// @return returns the sum
int sum_gen(std::string word){
  int sum{0};
  for(auto& i : word){ // while loop rewritten
      sum += i;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  bool correct_num_arg{argc==3};
  if (correct_num_arg) {
    std::string program_name{argv[0]};
    char first_letter_of_1st_argument{*(argv[1])}; // *(argv[1])  would retrieve the first character of the 2nd word in input
    size_t program_name_lenght{program_name.size()};
    int second_argument{std::atoi(argv[2])}; // atoi converts second input into integer
    std::string first_argument{argv[1]}; // argv[1] would point to the string (to the 2nd word in input)
    
    long int ASCII_sum = sum_gen(first_argument); // sum generated based on the keyword

    if ((ASCII_sum ^ first_letter_of_1st_argument * 3) << (program_name_lenght & 0x1f) == second_argument) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
  else{
    std::cout<< "Wrong number of arguments" << std::endl;
  }
}