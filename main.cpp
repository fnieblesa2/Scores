#include <iostream>

int main() {
    double score;
    auto sum = 0.0;
    auto finished = false;
    auto counter = 0;
    while (!finished){
        std:: string input;
        std::cout << "Please enter a test score (0 to stop): " << std::endl;
        std::cin >>input;
        score = stod(input);
        finished = score == 0;
        if(!finished){
            sum += score;
            counter++;
        }
    }
    std::cout<<"There was "<<counter<<" scores entered."<<std::endl;
    std::cout<<"The total average is: "<<sum/counter<<std::endl;
    return 0;
}
