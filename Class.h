#pragma once
#include <iostream>
#include <vector>

struct Mahasiswa {
    std::string nama;
    int nim;
};

class StudiKasus {
    public:
        void Input();
        void Process();
        void Output();

    private:
        std::vector<Mahasiswa> List;
        std::vector<Mahasiswa*> ListPointer;
};
