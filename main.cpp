#include "include/Vehicul.h"
#include <iostream>
#include <vector>
#include <string>


int main() {
    std::cout << "===========================================" << std::endl;
    std::cout << "   Sistem de Simulare Trafic v1.0         " << std::endl;
    std::cout << "===========================================" << std::endl;

  
    Strada stradaMea("Strada Trandafirilor");

    std::cout << "\n[SISTEM]: Se populeaza strada cu vehicule..." << std::endl;

  
    stradaMea.adaugaVehicul(new Masina("B 101 TRN"));
    stradaMea.adaugaVehicul(new Motocicleta("B 22 MOTO"));
    stradaMea.adaugaVehicul(new Camion("B 500 LOAD"));
    stradaMea.adaugaVehicul(new Masina("B 77 WXY"));

    
    stradaMea.simuleazaTrafic();

    std::cout << "\n===========================================" << std::endl;
    std::cout << "   Simularea s-a incheiat cu succes!      " << std::endl;
    std::cout << "===========================================" << std::endl;


    return 0;
}