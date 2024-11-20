#include <iostream>
#include <iomanip> // Thý vi?n cho hàm setw()

int main() {
    // Tiêu ð? b?ng
    std::cout << "DANH SACH SINH VIEN" << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;
    std::cout << "| " << std::setw(3) << "STT" 
              << " | " << std::setw(13) << "Ho va ten" 
              << " | " << std::setw(4) << "Tuoi" 
              << " | " << std::setw(12) << "So dien thoai" 
              << " | " << std::setw(24) << "email" << " |" << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;

    // D? li?u sinh viên
    std::cout << "| " << std::setw(3) << 1 
              << " | " << std::setw(13) << "Nguyen Van A" 
              << " | " << std::setw(4) << 20 
              << " | " << std::setw(12) << "0904488481" 
              << " | " << std::setw(24) << "anv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 2 
              << " | " << std::setw(13) << "Nguyen Van B" 
              << " | " << std::setw(4) << 21 
              << " | " << std::setw(12) << "0904488482" 
              << " | " << std::setw(24) << "bnv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 3 
              << " | " << std::setw(13) << "Nguyen Van C" 
              << " | " << std::setw(4) << 18 
              << " | " << std::setw(12) << "0904488483" 
              << " | " << std::setw(24) << "cnv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 4 
              << " | " << std::setw(13) << "Nguyen Van D" 
              << " | " << std::setw(4) << 19 
              << " | " << std::setw(12) << "0904488484" 
              << " | " << std::setw(24) << "dnv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 5 
              << " | " << std::setw(13) << "Nguyen Van E" 
              << " | " << std::setw(4) << 22 
              << " | " << std::setw(12) << "0904488485" 
              << " | " << std::setw(24) << "env@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 6 
              << " | " << std::setw(13) << "Nguyen Van F" 
              << " | " << std::setw(4) << 21 
              << " | " << std::setw(12) << "0904488486" 
              << " | " << std::setw(24) << "fnv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 7 
              << " | " << std::setw(13) << "Nguyen Van G" 
              << " | " << std::setw(4) << 23 
              << " | " << std::setw(12) << "0904488487" 
              << " | " << std::setw(24) << "gnv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 8 
              << " | " << std::setw(13) << "Nguyen Van H" 
              << " | " << std::setw(4) << 19 
              << " | " << std::setw(12) << "0904488488" 
              << " | " << std::setw(24) << "hnv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 9 
              << " | " << std::setw(13) << "Nguyen Van I" 
              << " | " << std::setw(4) << 18 
              << " | " << std::setw(12) << "0904488489" 
              << " | " << std::setw(24) << "inv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "| " << std::setw(3) << 10 
              << " | " << std::setw(13) << "Nguyen Van K" 
              << " | " << std::setw(4) << 21 
              << " | " << std::setw(12) << "0904488480" 
              << " | " << std::setw(24) << "knv@rikkeiacademy.com" << " |" << std::endl;

    std::cout << "--------------------------------------------------------------" << std::endl;

    return 0;
}

