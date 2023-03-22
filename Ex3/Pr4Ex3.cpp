#include <iostream>
class Orc {
public:
    int goldamount = 0;
    Orc() {
        static int count = 0;
        count++;
        goldamount = count * 2;
        if (count > 5) {
            goldamount -= 2;
        }
    }
    void showgold() {
        std::cout << goldamount<<std::endl;
    }
   
};

int main() {
    Orc man;
    man.showgold();
    Orc man2;
    Orc man3;
    Orc man4;
    Orc man5;
    man5.showgold();
    Orc man6;
    man6.showgold();
    Orc man7;
    man7.showgold();
  
    
}



/*void counter() {


    goldamount = goldamount = count * 2;;
    if (count > 5) {
        goldamount -= 2;
    }
    std::cout << goldamount << std::endl; // Убил пять лет на использование статика в классе на плюсах
}
*/