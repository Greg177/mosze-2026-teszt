#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // HIBA: NELEMENTS helyett N_ELEMENTS kell
    std::cout << "1-100 ertekek duplazasa"; // HIBA: sima ' helyett " kell, illetve nincs lezárva a vége ;-jellel
    for (int i = 0; i < N_ELEMENTS; i++) // HIBA: hiányzó feltétel és léptető
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // HIBA: feltétel mindig false, soha nem fut le
    {
        std::cout << "Ertek: " << b[i] << std::endl; // HIBA: hiányzó << b[i] és ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag = 0; // HIBA: nincs inicializálva, legyen = 0
    for (int i = 0; i < N_ELEMENTS; i++) // HIBA: vessző helyett ;
    {
        atlag += b[i]; // HIBA: hiányzó ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
