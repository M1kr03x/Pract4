
#include <iostream>

class package {
public:
    int weight;
    std::string description;
    package(int w, std::string d){
        weight = w;
        description = d;
    }
};
class sendservice {
public:
    int i=0;
    int d = 0;
    int weightlimit;
    void giveweight(package post) {
       
        postsweight = postsweight + post.weight;
        if (postsweight > weightlimit) {
            d = d + 1; //Декремент в десятом проходили
            std::cout << "Ваши посылки нереально тяжёлые, ведь " << weightlimit << " кг это слишком много для нас, уменьшите размер поссылки" << std::endl;;
        }
        else {
            i++;
            std::cout << "Посылка #" << i << " с описанием \"" << post.description << "\" прошла  общую проверку веса" << std::endl;;
        };
        
    };
    void sended() {
        if (d == 0) {
            std::cout << "Ваши поссылки успешно отправлены";
        }
   }
private:
   
    int postsweight = 0;
};

int main()
{
    setlocale(LC_ALL, "Ru");
    sendservice man;
    std::cout << "Введите лимит веса поссылок" << std::endl;;
    std::cin >> man.weightlimit;
    package first(6, "Post");
    package second(6 ,"Post2");
    
    man.giveweight(first);
    man.giveweight(second);
    man.sended();

}

