\# Simulare Trafic 



\## Descriere

Acest proiect modelează gestionarea traficului într-un mediu urban modern, simulând comportamentul diferit al vehiculelor în funcție de caracteristicile lor și de infrastructura rutieră.



\## Abordare

Proiectul este construit folosind principii fundamentale de programare orientată pe obiecte:



\- \*\*Abstracție\*\* – definirea unui comportament general pentru vehicule

\- \*\*Modularitate\*\* – separarea vehiculelor de infrastructură

\- \*\*Extensibilitate\*\* – ușurință în adăugarea de noi tipuri de vehicule sau reguli



\## Funcționalități (Etapa 1)



\###  Ierarhia de Vehicule

\- Clasă abstractă: `Vehicul`

\- Clase derivate:

&#x20; - `Masina`

&#x20; - `Motocicleta`

&#x20; - `Camion`

\- Metodă virtuală pură: `deplasare()`

\- Suport pentru \*\*polimorfism\*\*



\###  Infrastructură

\- Clasă: `Strada`

\- Gestionează vehicule folosind `std::vector`

\- Coordonează simularea traficului

\- Destructor pentru gestionarea memoriei (fără memory leaks)



\##  Tehnologii

\- C++

\- CMake

\- Linux



\##  Build \& Run



```bash

mkdir build

cd build

cmake ..

make

./simulare\_trafic

