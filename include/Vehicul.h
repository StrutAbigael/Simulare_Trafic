#ifndef VEHICUL_H
#define VEHICUL_H

#include <string>
#include <iostream>

#include <vector>
#include <algorithm>

class Vehicul {
protected:
    std::string id;
public:
    Vehicul(std::string id) : id(id) {}
    virtual ~Vehicul() {}
    virtual void deplasare() = 0; // Metoda virtuala pura
};

class Masina : public Vehicul {
public:
    Masina(std::string id) : Vehicul(id) {}
    void deplasare() override {
        std::cout << "Masina " << id << " merge pe strada.\n";
    }
};
class Motocicleta : public Vehicul {
public:
    Motocicleta(std::string id) : Vehicul(id) {}
    void deplasare() override {
        std::cout << "Motocicleta " << id << " se strecoara prin trafic.\n";
    }
};

class Camion : public Vehicul {
public:
    Camion(std::string id) : Vehicul(id) {}
    void deplasare() override {
        std::cout << "Camionul " << id << " transporta marfa grea.\n";
    }
};
class Strada {
private:
    std::string nume;
    std::vector<Vehicul*> vehiculePeStrada;

public:
    Strada(std::string numeStrada) : nume(numeStrada) {}

    // Metodă de compoziție: adăugăm un vehicul pe această stradă
    void adaugaVehicul(Vehicul* v) {
        vehiculePeStrada.push_back(v);
        std::cout << "[INFO]: Vehicul nou a intrat pe strada " << nume << ".\n";
    }

    void simuleazaTrafic() {
        std::cout << "\n--- Trafic pe strada: " << nume << " ---" << std::endl;
        for (Vehicul* v : vehiculePeStrada) {
            v->deplasare();
        }
    }

    // Destructor pentru a curăța memoria (foarte important în C++)
    ~Strada() {
        for (Vehicul* v : vehiculePeStrada) {
            delete v;
        }
        vehiculePeStrada.clear();
        std::cout << "[DEBUG]: Strada " << nume << " a fost eliberata din memorie.\n";
    }
};

#endif