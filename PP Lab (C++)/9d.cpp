// Anvesh Khode
// 9d - Make a class named Druit with a datamember to calculate the number of
// fruits in a basket. Create two other classes named Apple and Mango to
// calculate the number of apples and mangoes in the basket. Print the number of
// fruits of each type, and the total number of fuits in the basket.
#include <iostream>
using namespace std;

class Fruit {
   protected:
    int numFruits;

   public:
    Fruit(int num) : numFruits(num) {}
    int getNumFruits() { return numFruits; }
};

class Apple : public Fruit {
   public:
    Apple(int num) : Fruit(num) {}
    int getNumApples() { return getNumFruits(); }
};

class Mango : public Fruit {
   public:
    Mango(int num) : Fruit(num) {}
    int getNumMangoes() { return getNumFruits(); }
};

int main() {
    int numApples = 10;
    int numMangoes = 5;

    Apple apples(numApples);
    Mango mangoes(numMangoes);

    int totalFruits = apples.getNumApples() + mangoes.getNumMangoes();

    cout << "Number of Apples: " << apples.getNumApples() << endl;
    cout << "Number of Mangoes: " << mangoes.getNumMangoes() << endl;
    cout << "Total Number of Fruits: " << totalFruits << endl;

    return 0;
}
