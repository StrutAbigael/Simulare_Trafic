#include "include/Vehicul.h"
#include <iostream>
#include <vector>
#include <string>

/**
 * Proiect: Simulare Trafic Rutier
 * Autor: Abigael
 * Obiectiv: Demonstrarea conceptelor de POO (Mostenire, Polimorfism, Compozitie)
 */

int main() {
    std::cout << "===========================================" << std::endl;
    std::cout << "   Sistem de Simulare Trafic v1.0         " << std::endl;
    std::cout << "===========================================" << std::endl;

    // 1. Instantiem obiectul principal (Compozitie)
    // Folosim numele cerut: Strada Trandafirilor
    Strada stradaMea("Strada Trandafirilor");

    std::cout << "\n[SISTEM]: Se populeaza strada cu vehicule..." << std::endl;

    // 2. Adaugam vehicule folosind Polimorfismul
    // Cream obiecte derivate si le trecem ca pointeri catre clasa de baza
    stradaMea.adaugaVehicul(new Masina("B 101 TRN"));
    stradaMea.adaugaVehicul(new Motocicleta("B 22 MOTO"));
    stradaMea.adaugaVehicul(new Camion("B 500 LOAD"));
    stradaMea.adaugaVehicul(new Masina("B 77 WXY"));

    // 3. Executam simularea (Polimorfism in actiune)
    // Fiecare obiect va reactiona conform tipului sau real (Masina, Motocicleta, etc.)
    stradaMea.simuleazaTrafic();

    std::cout << "\n===========================================" << std::endl;
    std::cout << "   Simularea s-a incheiat cu succes!      " << std::endl;
    std::cout << "===========================================" << std::endl;

    // La finalul functiei main, obiectul 'stradaMea' va iesi din domeniu (scope),
    // iar destructorul sau (~Strada) va fi apelat automat.
    // Acesta va sterge toti pointerii din memorie pentru a evita leak-urile.

    return 0;
}