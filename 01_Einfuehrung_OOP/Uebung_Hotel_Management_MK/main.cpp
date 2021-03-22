#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

class room
{
public:
    void set_room_size(uint64_t pi_size)
    {
        this->m_room_size = pi_size;
    }
    void set_bed_count(uint64_t pi_count)
    {
        this->m_bed_count = pi_count;
    }
    void set_occupy_state(bool pi_state)
    {
        this->m_occupy_state = pi_state;
    }
    void set_checkin_state(bool pi_state)
    {
        std::cout << "########################### this->m_checkedin:" << this->m_checkedin << "pi_state:" << pi_state << std::endl; //xxx
        this->m_checkedin = pi_state;
    }
    uint64_t get_room_size()
    {
        return this->m_room_size;
    }
    uint64_t get_bed_count()
    {
        return this->m_bed_count;
    }
    bool get_occupy_state()
    {
        return this->m_occupy_state;
    }
    bool get_checkin_state()
    {
        return this->m_checkedin;
    }

private:
    uint64_t m_room_size = 0;
    uint64_t m_bed_count = 0;
    bool m_occupy_state = false;
    bool m_checkedin = false;
};
class hotel
{
public:
    hotel(uint64_t pi_hotel_size, std::string pi_hotel_name)
    {
        this->name = pi_hotel_name;
        this->data.resize(pi_hotel_size);
        for (uint64_t i = 0; i < this->data.size(); ++i)
        {
            room test_zimmer;
            this->data[i] = test_zimmer;
        }
    }

    std::vector<room> data;
    std::string name;
};

int main()
{
    uint64_t input_arg1 = 0;
    hotel hotel(10, "Klara Hotelheimer");

repeat:
    system("CLS");
    std::string tmp = "The Hotel '" + hotel.name + "' has in total a room count of " + std::to_string(hotel.data.size()) + ".\n";

    for (uint64_t i = 0; i < hotel.data.size(); ++i)
        tmp += "Id:" + std::to_string(i) + " | " + "State:" + (hotel.data[i].get_occupy_state() ? "Occupied" : "Free") + " | " + "Bed Count:" + std::to_string(hotel.data[i].get_bed_count()) + " | " + "Room Size:" + std::to_string(hotel.data[i].get_room_size()) + " | " + "Check In/Out Status:" + (hotel.data[i].get_checkin_state() ? "In" : "Out") + '\n';

    std::cout << tmp << "\n";
    
    std::cout << "Please enter the option you want to use:\n1. Change occupy state\n2. Set bed count\n3. Set room size\n4. Check in/out\n> ";
    std::cin >> input_arg1;

    bool new_occupy_state = false;
    bool new_checkin_state = false;
    uint64_t new_bed_count = 0;
    uint64_t new_room_size = 0;
    uint64_t id = 0;

    switch (input_arg1)
    {
        case 1:
            std::cout << "Please enter the needed Parameters: (Param1)[UInt]Id (Param2)[Bool(0/1)]State\n> ";
            std::cin >> id >> new_occupy_state;
            if (id > hotel.data.size())
            {
                MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " couldnt be found.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            }
            if (!hotel.data[id].get_checkin_state() && new_occupy_state)
            {
                MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " first needs a check in.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            } else if (hotel.data[id].get_checkin_state() && !new_occupy_state)
            {
                MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " first needs a check out.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            }
            hotel.data[id].set_occupy_state(new_occupy_state);
            break;

        case 2:
            std::cout << "Please enter the needed Parameters: (Param1)[UInt]Id (Param2)[UInt]Bed count\n> ";
            std::cin >> id >> new_bed_count;
            if (id > hotel.data.size())
            {
                MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " couldnt be found.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            }
            hotel.data[id].set_bed_count(new_bed_count);
            break;

        case 3:
            std::cout << "Please enter the needed Parameters: (Param1)[UInt]Id (Param2)[UInt]Room size\n> ";
            std::cin >> id >> new_room_size;
            if (id > hotel.data.size())
            {
                MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " couldnt be found.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            }
            hotel.data[id].set_room_size(new_room_size);
            break;

        case 4:
            std::cout << "Please enter the needed Parameters: (Param1)[UInt]Id (Param2)[Bool(0/1)]State\n> ";
            std::cin >> id >> new_checkin_state;
            if (id > hotel.data.size())
            {
                MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " couldnt be found.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            }
            if (hotel.data[id].get_checkin_state() == new_checkin_state)
            {
                if (new_checkin_state)
                    MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " is already checked in.").c_str(), "Error", MB_OK | MB_ICONERROR);
                else
                    MessageBoxA(NULL, std::string("The hotel room with the id " + std::to_string(id) + " is already checked out.").c_str(), "Error", MB_OK | MB_ICONERROR);
                break;
            }
            hotel.data[id].set_checkin_state(new_checkin_state);
            break;

        default:
            MessageBoxA(NULL, std::string("Couldnt find the parameter " + std::to_string(input_arg1) + ".").c_str(), "Error", MB_OK | MB_ICONERROR);
            break;
    }
    goto repeat;
}