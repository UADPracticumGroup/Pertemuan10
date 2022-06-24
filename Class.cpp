#include "Class.h"

void StudiKasus::Input() {
    std::cout << "==============================================" << std::endl;
    std::cout << "Input Data Mahasiswa yang masuk babak finalis" << std::endl;
    std::cout << "==============================================" << std::endl;
    for (int i = 0; i < 5; i++) {
        Mahasiswa mhs;
        std::cout << "Nama: ";
        std::getline(std::cin, mhs.nama);
        std::cout << "NIM: ";
        std::cin >> mhs.nim;

        std::cin.ignore();
        List.push_back(mhs);
    }
}

void StudiKasus::Process() {
    for (int i = 0; i < List.size(); i++) {
        Mahasiswa* mhs = &List[i];
        ListPointer.push_back(mhs);
    }
}

void StudiKasus::Output() {
    std::cout << "==============================================" << std::endl;
    std::cout << "Data Mahasiswa yang masuk babak finalis" << std::endl;
    std::cout << "==============================================" << std::endl;
    
    for (int i = 0; i < ListPointer.size(); i++) {
        std::cout << i + 1 << ".\t";
        Mahasiswa* mhs = ListPointer[i];
        std::cout << "Nama: " << mhs->nama << std::endl;
        std::cout << "\tNIM: " << mhs->nim << std::endl;
    }
}
