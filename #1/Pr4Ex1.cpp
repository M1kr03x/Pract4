

#include <iostream>
#include <string>

class Spell {
public: 
    std::string SpellName;
    int Mana;
    Spell(int mana, std::string effect, std::string spellname) {
        SpellName = spellname;
        Mana = mana;
        Effect = effect;
    }
   virtual void Use() {
        std::cout << Effect<<std::endl;
    }
  virtual void func()  {

  }
private:
    
    std::string Effect;
};
class Magician {
public:
    std::string Name;
    int Mana;
    Magician(std::string name, int mana) {
        Name = name;
        Mana = mana;
    }
   
    void CastSpell(Spell spell) {
        if (Mana >= spell.Mana) {
            std::cout << "+" << Name << "+" << " колдует!" << "\t";
            spell.Use();
            Mana -= spell.Mana;
        }
        else std::cout << "Для использования "<< spell.SpellName << " Не хватает " << spell.Mana - Mana << " единиц маны. Хряпни зелья браток.";
    }
};


int main()
{
    setlocale(LC_ALL, "Ru");
    Spell alohomora(60, "Замок открывается!", "Название спелла");
    Spell vingard(60, "Предмет поднимается в воздух", "Тут тоже навзвание спелла");
    Magician Wizzzard("Имя", 100);
    Wizzzard.CastSpell(alohomora);
    Wizzzard.CastSpell(vingard);

}

