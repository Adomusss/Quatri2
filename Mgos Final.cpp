#include <iostream>
using namespace std;
#include <vector>;

// Clase base para todos los personajes
class Personatge // Se puede hacer completamente virtual si no se quiere instanciar directamente
{
private:
    string name = " "; 
    int lvl = 1; 
    void lvlUp(int newlvl) {
        modificar_nivell(newlvl); // Método privado para subir de nivel
    }
protected:
    int vida = 100; // Vida del personaje, accesible por clases derivadas
    virtual void curar() = 0; // Método virtual puro, obliga a las clases derivadas a implementarlo
public:
    Personatge() {} // Constructor por defecto

    // Constructor con parámetros
    Personatge(string name, int vida, int lvl) {
        this->name = name;
        this->vida = vida;
        this->lvl = lvl;
    }
    void modificar_nivell(int newlvl) {
        this->lvl = newlvl; // Modifica el nivel del personaje
    }

    // Métodos para obtener valores privados
    string getName() { return this->name; }
    int getVida() { return this->vida; }
    int getLVL() { return this->lvl; }
};

// Clase Mago que hereda de Personatge
class Mago : public Personatge {
private:
    int MP = 10; // Poder mágico
    int mana = 100; // Cantidad de maná
public:
    Mago() : Personatge() {} // Constructor por defecto
    Mago(string name, int vida, int lvl, int MP, int mana) : Personatge(name, vida, lvl) {
        this->mana = mana;
        this->MP = MP;
    }
    void curar() override { // Implementación de curar
        vida += 30;
    }
    int getMP() { return this->MP; }
    int getmana() { return this->mana; }
};

// Clase Guerrer (Guerrero) que hereda de Personatge
class Guerrer : public Personatge {
private:
    int FP = 10; // Poder físico
public:
    Guerrer() : Personatge() {}
    Guerrer(string name, int vida, int lvl, int FP) : Personatge(name, vida, lvl) {
        this->FP = FP;
    }
    void curar() override { // Implementación de curar
        vida += 15;
    }
    int getFP() { return this->FP; }
};

// Clase Arquer que hereda de Personatge
class Arquer : public Personatge {
private:
    int Range = 50; // Alcance del arquero
public:
    Arquer() : Personatge() {}
    Arquer(string name, int vida, int lvl, int Range) : Personatge(name, vida, lvl) {
        this->Range = Range;
    }
    void curar() override { // Implementación de curar
        vida += 10;
    }
    int getrange() { return this->Range; }
};

// Función para curar a un mago
void healthCheck(vector<Mago>& m, int mNum) {
    cout << "Which Mage would you like to heal?" << endl;
    cin >> mNum;
    mNum--;
    m[mNum].curar(); // Aplica curación al mago seleccionado
    cout << "Mage " << mNum + 1 << "\n" << endl;
    cout << "Name: " << m[mNum].getName() << endl;
    cout << "Health: " << m[mNum].getVida() << endl;
    cout << "Level: " << m[mNum].getLVL() << endl;
    cout << "Magic Power: " << m[mNum].getMP() << endl;
    cout << "Mana: " << m[mNum].getmana() << endl;
    cout << "\n\n" << endl;
}

// Función para mostrar información de los personajes en el grupo
void partyPrinter(vector<Mago>& m, int mNumber, vector<Guerrer>& g, int gNumber, vector<Arquer>& a, int aNumber) {
    cout << "Which members of the party would you like to see? Mage/s | Warrior/s | Archer/s (introduce M/W/A) \n If you would like to stop type 's'" << endl;
    char type;
    cin >> type;

    while (type != 's' && type != 'S') {
        if (type == 'm' || type == 'M') {
            if (mNumber == 0) {
                cout << "There are no Mages in the party" << endl;
            }
            else {
                for (int i = 0; i < mNumber; i++) {
                    cout << "Mage " << i + 1 << "\n" << endl;
                    cout << "Name: " << m[i].getName() << endl;
                    cout << "Health: " << m[i].getVida() << endl;
                    cout << "Level: " << m[i].getLVL() << endl;
                    cout << "Magic Power: " << m[i].getMP() << endl;
                    cout << "Mana: " << m[i].getmana() << endl;
                    cout << "\n\n" << endl;
                }
            }
        }
        // Se repite la misma estructura para Warriors y Archers...
        cout << "\n\n\n" << endl;
        cout << "Which members of the party would you like to see? Mage/s | Warrior/s | Archer/s (introduce M/W/A) \n If you would like to stop type 's'" << endl;
        cin >> type;
    }
}

int main() {
    int mNumber, gNumber, aNumber;
    string name;
    vector<Mago> m;
    vector<Guerrer> g;
    vector<Arquer> a;

    cout << "Introduce the number of Mages in your party" << endl;
    cin >> mNumber;
    for (int i = 0; i < mNumber; i++) {
        cout << "Mage name: " << endl;
        cin >> name;
        m.push_back(Mago(name, 700, 1, 75, 400));
    }

    cout << "Introduce the number of Warriors in your party" << endl;
    cin >> gNumber;
    for (int i = 0; i < gNumber; i++) {
        cout << "Warrior name: " << endl;
        cin >> name;
        g.push_back(Guerrer(name, 1200, 1, 67));
    }

    cout << "Introduce the number of Archers in your party" << endl;
    cin >> aNumber;
    for (int i = 0; i < aNumber; i++) {
        cout << "Archer name: " << endl;
        cin >> name;
        a.push_back(Arquer(name, 800, 1, 150));
    }

    partyPrinter(m, mNumber, g, gNumber, a, aNumber);
    healthCheck(m, mNumber);
    return 0;
}
