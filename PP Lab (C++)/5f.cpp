// Anvesh Khode
// 5f - Create a constructor college to initialize the deatils college
// name,state,NREF and NAAC ranking and find out the college in maharastra state
// having NAAC A++ grading

#include <iostream>
#include <string>

class College {
   private:
    std::string state;
    int NREF;
    std::string NAACRanking;

   public:
    std::string collegeName;
    College(std::string name, std::string st, int nref, std::string naac)
        : collegeName(name), state(st), NREF(nref), NAACRanking(naac) {}

    std::string getState() const { return state; }
    std::string getNAACRanking() const { return NAACRanking; }
};

int main() {
    // Creating array to store college details
    College colleges[3] = {College("College1", "Maharashtra", 1234, "A++"),
                           College("College2", "Karnataka", 5678, "A"),
                           College("College3", "Maharashtra", 91011, "A+")};

    // Finding college in Maharashtra with NAAC A++ grading
    std::cout << "Colleges in Maharashtra with NAAC A++ grading:\n";
    for(int i = 0; i < 3; ++i) {
        if(colleges[i].getState() == "Maharashtra" &&
           colleges[i].getNAACRanking() == "A++") {
            std::cout << "College Name: " << colleges[i].collegeName
                      << std::endl;
            std::cout << "State: " << colleges[i].getState() << std::endl;
            std::cout << "NAAC Ranking: " << colleges[i].getNAACRanking()
                      << std::endl
                      << std::endl;
        }
    }

    return 0;
}
