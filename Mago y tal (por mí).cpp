#include <iostream>
using namespace std;
#include <vector>

class Personatge {
//private lo que no cambia
    private:
        string name;
        int salut;
        
        int lvl;
        //hacemos un bool para suponer que sube de lvl
        bool lvlup() {
            cout << "you leveled up, yay!" << endl;
            return true;
        }

        bool curao() {
            cout << "you've been healed, yay!" << endl;
            return true;
        }
    //public lo que sí
    public:
        string abi;

        
       //si el bool coincide, que returne las frases de yay!
        int checklvl(bool condition) {
            if (condition == true) {
               return lvlup();
            }
        }

        int curasion(bool condition) {
            if (condition == true) {
                return curao();

            }
        }
        //constructor => Personatge base (p1)
        Personatge() {};
        // para guardar la info que daremos => (p2, p3, etc)
       Personatge(string name, int hp, int lvl){
           this->name = name;
           this->salut = hp;
           this->lvl = lvl;


       }
        //conseguir la info aunque estuviese en private
       int getHP() { return this->salut; }        int getLvl() { return this->lvl; }
       string getName() { return this->name; }
      
};

class Mago {
    Mago(){}

    void renovar(Personatge& p) {
        p.abi = "bola de foc";
        cout << "la habilidad del mago es:\t" << p.abi << endl;
    }
};

class Guerrer {
    Guerrer(){}
    void renovar(Personatge& p) {
        p.abi = " habilitat de concentracio";
        cout << "la habilidad del guerrero es:\t" << p.abi << endl;
    }
};

class Arquerinho {
    Arquerinho(){}
    void renovar(Personatge& p) {
        p.abi = "llança ignia";
        cout << "la habilidad del arquero es:\t" << p.abi;
    }
};



int main()
{
    // se puede hacer de dos formas
    //con p1, p2, p3
    Personatge p1;
    Personatge p2("hector jo puta", -72, -4);
    Personatge p3("aaaaa", 1, 1);

    cout << p2.getName() << "\t" << p2.getHP() << "\t" << p2.getLvl() << endl << endl;

    cout << p3.getName() << "\t" << p3.getHP() << "\t" << p3.getLvl() << endl << endl;

    cout << p3.checklvl(true) << endl;
    cout << p3.curasion(true) << endl;
    cout << p3.abi << endl; 
  
    //o con vector<Personatge> ps => ps[0], ps[1], ps[2], etc

    /*vector<Personatge> ps;
    ps.push_back(p2);
    ps.push_back(Personatge("hector jo puta", 1, -4));

    ps.push_back(p3);
    ps.push_back(Personatge("aaaaa", 1, 1));*/

  
  
    /*cout << ps[0].checklvl(true) << endl;
      cout << ps[0].curasion(true) << endl;
      cout << ps[0].abi << endl;
  
      cout << ps[1].checklvl(true) << endl;
      cout << ps[1].curasion(true) << endl;
      cout << ps[1].abi << endl;*/

    return 0;
}
